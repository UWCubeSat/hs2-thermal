import numpy as np
import matplotlib.pyplot as plt

# --- Constants ---
Solar_Flux = 1361.0      # W/m^2
absorptivity = 0.90
emissivity = 0.85
sigma = 5.670374419e-8

Albedo = 0.22
F_alb = 0.30
Earth_IR = 240.0         # W/m^2
F_ir = 0.5

T_earth = 288             # K
F_space = 0.5
F_earth = 0.5

# --- Orbital parameters ---
altitude = 400e3          # 500 km
Re = 6371e3               # Radius of Earth
mu = 3.986e14             # m^3/s^2 Earth's Standard Gravitational Parameter
T_orbit = 2 * np.pi * np.sqrt((Re + altitude)**3 / mu)  # orbital period (s)

N = 500                   # number of points in one orbit
time = np.linspace(0, T_orbit, N)
true_anomaly = np.cos(2 * np.pi * time / T_orbit)


# --- Sun incidence model ---
# Simple cosine model: facing sun at t=0, eclipse when incidence < 0
sun_incidence = np.clip(true_anomaly, 0, None)   # no sunlight during eclipse

# print(sun_incidence)

# --- Temperature calculation over orbit ---
T_panel_list = []

for inc in sun_incidence:
    attitude = inc  # effective cosine between panel normal & sun
    # Incident absorbed power (your formula)
    Qin = (absorptivity * Solar_Flux * attitude +
           absorptivity * Solar_Flux * Albedo * F_alb +
           Earth_IR * F_ir)

    # Radiative balance
    T_panel = ((Qin + (T_earth**4) * emissivity * sigma * F_earth) /
               (emissivity * sigma))**0.25

    T_panel_list.append(T_panel)

T_panel_array = np.array(T_panel_list)
T_celsius = T_panel_array - 273.15

# --- Plot Results ---
plt.figure(figsize=(8,5))
plt.plot(time / 60, T_celsius)
plt.xlabel("Time (minutes)")
plt.ylabel("Panel Temperature (°C)")
plt.title("Solar Panel Temperature Over One Orbit")
plt.grid(True)
plt.show()
