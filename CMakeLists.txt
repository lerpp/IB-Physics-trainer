cmake_minimum_required(VERSION 4.0)
project(ib_phys_tool)

set(CMAKE_CXX_STANDARD 20)

add_executable(ib_phys_tool main.cpp
        includes/input_handling.h
        includes/input_handling.cpp
        includes/cue_cards.cpp
        includes/cue_cards.h
        includes/graph_analysis.cpp
        includes/graph_analysis.h
        includes/continue.cpp
        includes/continue.h
        includes/dynamics/connected_carts.cpp
        includes/dynamics/fma.cpp
        includes/dynamics/force_pairs.cpp
        includes/dynamics/friction.cpp
        includes/dynamics/grav_attraction.cpp
        includes/dynamics/hanging_weight_pulley.cpp
        includes/dynamics/spring_force.cpp
        includes/electromagnetism/circuit_analysis.cpp
        includes/electromagnetism/dc_motor.cpp
        includes/electromagnetism/electromotive_force.cpp
        includes/electromagnetism/evit.cpp
        includes/electromagnetism/iqt.cpp
        includes/electromagnetism/material_resistance.cpp
        includes/electromagnetism/ohms_law.cpp
        includes/electromagnetism/transformer_coils.cpp
        includes/electromagnetism/veq.cpp
        includes/energy/calorimeter.cpp
        includes/energy/efficiency.cpp
        includes/energy/energy_types.cpp
        includes/energy/heat_capacity.cpp
        includes/energy/heat_transfer_rate.cpp
        includes/energy/latent_heat.cpp
        includes/energy/mech_energy.cpp
        includes/energy/power.cpp
        includes/energy/reactor_eqs.cpp
        includes/energy/wfd.cpp
        includes/kinematics/acceleration_velocity_time.cpp
        includes/kinematics/add_vectors.cpp
        includes/kinematics/projectile_motion.cpp
        includes/kinematics/velocity_distance_time.cpp
        includes/nuclear/half_life.cpp
        includes/nuclear/nucleus_charge.cpp
        includes/nuclear/photon_energy.cpp
        includes/space/blackbody_rad.cpp
        includes/waves/doppler.cpp
        includes/waves/mach_num.cpp
        includes/waves/wave_beats.cpp
        includes/waves/wave_speed.cpp
)
