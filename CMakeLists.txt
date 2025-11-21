cmake_minimum_required(VERSION 4.0)
project(ib_phys_tool)

set(CMAKE_CXX_STANDARD 20)

add_executable(ib_phys_tool main.cpp
        includes/input_handling.h
        includes/input_handling.cpp
        includes/cue_cards.cpp
        includes/cue_cards.h
        includes/velocity_distance_time.cpp
        includes/velocity_distance_time.h
        includes/acceleration_velocity_time.cpp
        includes/acceleration_velocity_time.h
        includes/graph_analysis.cpp
        includes/graph_analysis.h
        includes/add_vectors.cpp
        includes/add_vectors.h
        includes/projectile_motion.cpp
        includes/projectile_motion.h
        includes/fma.cpp
        includes/fma.h
        includes/continue.cpp
        includes/continue.h
        includes/force_pairs.cpp
        includes/force_pairs.h
        includes/friction.cpp
        includes/friction.h
        includes/grav_attraction.cpp
        includes/grav_attraction.h
        includes/spring_force.cpp
        includes/spring_force.h
        includes/connected_carts.cpp
        includes/connected_carts.h
        includes/hanging_weight_pulley.cpp
        includes/hanging_weight_pulley.h
        includes/wfd.cpp
        includes/wfd.h
        includes/mech_energy.cpp
        includes/mech_energy.h
)
