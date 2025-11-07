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
        includes/projectile_motion.h)
