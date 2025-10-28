import numpy as np

# Calculating the temperature of a solar panel in space

# Constants
Solar_Flux = 1361.0  # W/m^2

# Assuming high because black solar panels
absorptivity = 0.90
emissivity = 0.85

# Stefan-Boltzmann Constant (W/(m^2*K^4))
sigma = 5.670374419e-8

# Albedo effect
Albedo = 0.22       # reflectivity
F_alb = 0.30
Earth_IR = 240.0    # W/m^2
F_ir = 0.5

# Attitude (angle between panel normal and sun direction)
attitude_angle = 0  # radians
attitude = np.cos(attitude_angle)

# Incident power absorbed (W/m^2)
Qin = (absorptivity * Solar_Flux * attitude +
       absorptivity * Solar_Flux * Albedo * F_alb +
       Earth_IR * F_ir)

# Radiative properties
T_earth = 288       # K
F_space = 0.5
F_earth = 0.5

# Panel temperature (assuming radiation into space)
T_panel = ((Qin + (T_earth**4) * emissivity * sigma * F_earth) /
           (emissivity * sigma))**0.25

# Convert to Celsius
T = T_panel - 273.15

print(f"Panel temperature: {T_panel:.2f} K ({T:.2f} °C)")
