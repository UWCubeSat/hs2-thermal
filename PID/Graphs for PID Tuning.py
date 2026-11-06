import serial
import matplotlib.pyplot as plt
import time
import re
import csv

# -------------------------------
# Serial Setup
# -------------------------------
ser = serial.Serial('COM7', 115200, timeout=1)
time.sleep(2)  # allow Arduino to reset

# -------------------------------
# CSV Logging
# -------------------------------
filename = "PID_Temperature_Log.csv"
csv_file = open(filename, "w", newline="")
csv_writer = csv.writer(csv_file)
csv_writer.writerow(["Time (s)", "Setpoint (C)", "Temperature (C)", "Output"])
csv_file.flush()

# -------------------------------
# Data Storage (NO LIMIT)
# -------------------------------
t = []
sp = []
pv = []
out = []

# Time reference
start_time = time.time()

# -------------------------------
# Plot Setup (Persistent)
# -------------------------------
plt.ion()
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(10, 6))

line_sp, = ax1.plot([], [], label="Setpoint")
line_pv, = ax1.plot([], [], label="Temperature")
ax1.set_ylabel("Temperature (°C)")
ax1.legend()
ax1.grid(True)

line_out, = ax2.plot([], [], label="PID Output")
ax2.set_ylabel("Control Output")
ax2.set_xlabel("Time (s)")
ax2.legend()
ax2.grid(True)

print("Logging + plotting… Press CTRL+C to stop.\n")

# -------------------------------
# Main Loop
# -------------------------------
try:
    while True:

        line = ser.readline().decode(errors='ignore').strip()

        if "Set:" not in line:
            continue

        nums = re.findall(r"[-+]?\d*\.\d+|\d+", line)

        if len(nums) < 3:
            continue

        setp = float(nums[0])
        temp = float(nums[1])
        output = float(nums[2])

        current_time = time.time() - start_time

        # -----------------------
        # Log CSV
        # -----------------------
        csv_writer.writerow([current_time, setp, temp, output])
        csv_file.flush()

        # -----------------------
        # Store data
        # -----------------------
        t.append(current_time)
        sp.append(setp)
        pv.append(temp)
        out.append(output)

        # -----------------------
        # Update plot data
        # -----------------------
        line_sp.set_data(t, sp)
        line_pv.set_data(t, pv)
        line_out.set_data(t, out)

        if len(t) > 0:
            ax1.set_xlim(0, max(t) + 1)
            ax2.set_xlim(0, max(t) + 1)

        ax1.relim()
        ax1.autoscale_view()

        ax2.relim()
        ax2.autoscale_view()

        plt.pause(0.05)

# -------------------------------
# Clean Exit
# -------------------------------
except KeyboardInterrupt:
    print("\nStopping… Saving file.")

    csv_file.close()
    ser.close()

    plt.savefig("Final_PID_Graph.png")

    print("Saved CSV →", filename)
    print("Saved graph → Final_PID_Graph.png")