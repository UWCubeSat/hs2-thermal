import numpy as np
import matplotlib.pyplot as plt


# --- Orbital parameters ---
altitude = 400e3          # 500 km
Re = 6371e3               # Radius of Earth
mu = 3.986e14             # m^3/s^2 Earth's Standard Gravitational Parameter
T_orbit = 2 * np.pi * np.sqrt((Re + altitude)**3 / mu)  # orbital period (s)


# --- Time in/out of the sun ---
# Approximation for a circular LEO
def angle_of_eclipse(altitude, beta_angle):
    # returns the half angle from the "back" of earth to the angle of eclipse entry
    return np.arcsin(np.sqrt(((Re / (Re + altitude)) ** 2 - np.sin(beta_angle) ** 2) / np.cos(beta_angle)))

def time_in_eclipse(altitude, beta_angle, T_orbit):
    return T_orbit * (angle_of_eclipse(altitude, beta_angle) / np.pi)

# Sunlit time = orbit period minus eclipse time
def time_in_sun(altitude, beta_angle, T_orbit):
    return T_orbit - time_in_eclipse(altitude, beta_angle, T_orbit)

possible_beta_deg = np.linspace(0, 90, 90)
possible_beta = np.radians(possible_beta_deg)

eclipse_time = time_in_eclipse(altitude, possible_beta, T_orbit) / 60
sun_time = time_in_sun(altitude, possible_beta, T_orbit) / 60

plt.figure(figsize=(8,5))
plt.plot(np.degrees(possible_beta), sun_time, label = "Time in Sun")
plt.plot(np.degrees(possible_beta), eclipse_time, label = "Time in Eclipse")
plt.title('Time in the sun vs angle of incidence')
plt.xlabel('Beta Angle (Degrees)')
plt.ylabel('Time (minutes)')
plt.legend()

# plt.show()


# ---True anomaly sunlight dict---
# in the future this will need to be reworked for returning intensities between 0 and 100
def sun_dict(altitude, beta_angle):
    sun_dict = {}
    
    half_angle = np.degrees(angle_of_eclipse(altitude, beta_angle))  # half-angle in degrees

    for angle in range(360):
        # Eclipse interval: around the "back" of Earth
        if angle >= (180 - half_angle) and angle <= (360 - half_angle):
            sun_dict[angle] = 0
        else:
            sun_dict[angle] = 100
    
    return sun_dict


# called angle has to be > 0
print(sun_dict(500e3, 0)[180])
print(sun_dict(500e3, 45)[10])
print(sun_dict(500e3, 90)[180])
print(sun_dict(500e3, 180)[0])
