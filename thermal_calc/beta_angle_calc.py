import numpy as np
import matplotlib as plt


# --- Orbital parameters ---
altitude = 400e3          # 500 km
Re = 6371e3               # Radius of Earth
mu = 3.986e14             # m^3/s^2 Earth's Standard Gravitational Parameter
T_orbit = 2 * np.pi * np.sqrt((Re + altitude)**3 / mu)  # orbital period (s)


# --- Time in/out of the sun ---
# Approximation for a circular LEO
def angle_of_eclipse(altitude, beta_angle):
    # returns the angle from the orbital noon at which the satellite is eclipsed
    return np.arcsin(np.sqrt(((Re / (Re + altitude)) ** 2 - np.sin(beta_angle) ** 2) / (np.cos(beta_angle) ** 2)))

def time_in_eclipse(altitude, beta_angle, T_orbit):
    return T_orbit * (angle_of_eclipse(altitude, beta_angle) / np.pi)

# Sunlit time = orbit period minus eclipse time
def time_in_sun(altitude, beta_angle, T_orbit):
    return T_orbit - time_in_eclipse(altitude, beta_angle, T_orbit)

possible_beta_deg = np.linspace(0, 90, 90)
possible_beta = np.radians(possible_beta_deg)

eclipse_time = time_in_eclipse(altitude, possible_beta, T_orbit) / 60
sun_time = time_in_sun(altitude, possible_beta, T_orbit) / 60

plt.figure()
plt.plot(np.degrees(possible_beta), sun_time, label = "Time in Sun")
plt.plot(np.degrees(possible_beta), eclipse_time, label = "Time in Eclipse")
plt.title('Time in the sun vs angle of incidence')
plt.xlabel('Beta Angle (Degrees)')
plt.ylabel('Time (minutes)')
plt.legend()

plt.show