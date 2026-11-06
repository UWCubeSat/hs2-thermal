#include <SPI.h>

// -------------------------------
// Amplifier Thermocouple Pins
// -------------------------------
int pinIn = A0;

// -------------------------------
// Output (PWM to MOSFET)
// -------------------------------
int PWM_pin = 3;

// -------------------------------
// PID Parameters
// -------------------------------
float set_temperature = 25.0;  // setpoint (°C)
float temperature_read = 0.0;
float PID_error = 0;
float previous_error = 0;
float elapsedTime, Time, timePrev;
float PID_value = 0;

// -------------------------------
// PID Constants 
// -------------------------------
float kp = 12750.0, ki = 0, kd = 0;
float PID_p = 0, PID_i = 0, PID_d = 0;


// --------------------------------
// Thermocouple Variables
// --------------------------------
int reading;
float voltage;
float temp;

// -------------------------------
// Setup
// -------------------------------
void setup() {
  Serial.begin(115200);
  pinMode(PWM_pin, OUTPUT);

  pinMode(pinIn, INPUT);
  analogReadResolution(12); 

  Time = millis();

}

// -------------------------------
// Main Loop
// -------------------------------
void loop() {
  // Handle serial input commands
  handleSerial();

  // Read temperature
  temperature_read = readThermocouple();

  // Calculate PID
  PID_error = set_temperature - temperature_read;
  PID_p = kp * PID_error;
  PID_i += ki * PID_error;
  PID_d = kd * (PID_error - previous_error);

  // Calculate elapsed time
  timePrev = Time;
  Time = millis();
  elapsedTime = (Time - timePrev) / 1000.0;

  // Compute final PID output
  PID_value = 0.01 * (PID_p + PID_i + PID_d);

  // Limit output
  PID_value = constrain(PID_value, 0, 255);

  // Write PWM
  analogWrite(PWM_pin, (int)PID_value);

  previous_error = PID_error;

  // Print live data
  Serial.print("Set: ");
  Serial.print(set_temperature);
  Serial.print(" C,  Read: ");
  Serial.print(temperature_read);
  Serial.print(" C,  Output: ");
  Serial.print(PID_value);
  Serial.print(",  P=");
  Serial.print(PID_p, 2);
  Serial.print(" I=");
  Serial.print(PID_i, 2);
  Serial.print(" D=");
  Serial.println(PID_d, 2);

  delay(500);  // Update rate
}

// -------------------------------
// Read Thermocouple
// -------------------------------
double readThermocouple() {
  reading = analogRead(pinIn);
  voltage = reading * (3.3f / 4095.0f);
  temp = (voltage - 1.25f) / 0.005f;
  return temp;
}

// -------------------------------
// Handle Serial Input Commands
// -------------------------------
void handleSerial() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();
    input.toUpperCase();

    if (input.startsWith("SET")) {
      set_temperature = input.substring(3).toFloat();
      Serial.print("Setpoint changed to ");
      Serial.print(set_temperature);
      Serial.println(" °C");
    } 
    else if (input.startsWith("KP")) {
      kp = input.substring(2).toFloat();
      Serial.print("kp = "); Serial.println(kp);
    } 
    else if (input.startsWith("KI")) {
      ki = input.substring(2).toFloat();
      Serial.print("ki = "); Serial.println(ki);
    } 
    else if (input.startsWith("KD")) {
      kd = input.substring(2).toFloat();
      Serial.print("kd = "); Serial.println(kd);
    } 
    else {
      Serial.println("Unknown command. Use SET <temp>, KP <val>, KI <val>, KD <val>");
    }
    }
}