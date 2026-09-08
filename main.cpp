#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include "includes/cue_cards.h"
#include "includes/kinematics/acceleration_velocity_time.h"
#include "includes/kinematics/velocity_distance_time.h"
#include "includes/graph_analysis.h"
#include "includes/kinematics/add_vectors.h"
#include "includes/kinematics/projectile_motion.h"
#include "includes/dynamics/fma.h"
#include "includes/continue.h"
#include "includes/dynamics/force_pairs.h"
#include "includes/dynamics/friction.h"
#include "includes/dynamics/grav_attraction.h"
#include "includes/dynamics/spring_force.h"
#include "includes/dynamics/connected_carts.h"
#include "includes/dynamics/hanging_weight_pulley.h"
#include "includes/energy/wfd.h"
#include "includes/energy/mech_energy.h"
#include "includes/energy/power.h"
#include "includes/energy/energy_types.h"
#include "includes/energy/efficiency.h"
#include "includes/energy/heat_capacity.h"
#include "includes/energy/latent_heat.h"
#include "includes/energy/calorimeter.h"
#include "includes/electromagnetism/iqt.h"
#include "includes/electromagnetism/veq.h"
#include "includes/electromagnetism/evit.h"
#include "includes/electromagnetism/material_resistance.h"
#include "includes/electromagnetism/ohms_law.h"
#include "includes/electromagnetism/circuit_analysis.h"
#include "includes/electromagnetism/dc_motor.h"
#include "includes/electromagnetism/electromotive_force.h"
#include "includes/electromagnetism/transformer_coils.h"
#include "includes/waves/wave_speed.h"
#include "includes/waves/mach_num.h"
#include "includes/waves/wave_beats.h"
#include "includes/waves/doppler.h"
#include "includes/nuclear/nucleus_charge.h"
#include "includes/nuclear/half_life.h"
#include "includes/nuclear/photon_energy.h"
#include "includes/energy/reactor_eqs.h"
#include "includes/energy/heat_transfer_rate.h"
#include "includes/space/blackbody_rad.h"

using std::vector, std::string, std::cin, std::cout, std::ws, std::pair;

const vector all_questions = {
    pickCueCard,
    analyzeGraph,
    vdt,
    avt,
    addVector,
    projectile_motion,
    fma,
    force_pairs,
    sfriction,
    kfriction,
    two_body_grav,
    fm_grav_field,
    grav_field,
    spring_force,
    connected_carts,
    hang_weight_pulley,
    frict_hang_weight_pulley,
    wfdcos,
    kinetic_en,
    grav_potential_en,
    spring_en,
    pick_question,
    pwt,
    pfv,
    crane_lift_block,
    choose_energy,
    efficiency,
    heat_cap,
    latent_heat,
    calorimeter,
    iqt,
    veq,
    evit,
    mat_resist,
    ohms_law,
    piv,
    pir,
    pvr,
    circuit_analysis,
    circuit_current_analysis,
    dc_motor_quiz,
    emf_w,
    emf_p,
    internal_resistance,
    solve_transformer_coils,
    wave_speed,
    mach,
    beats,
    doppler_moving_source,
    nucleus_charge,
    half_life,
    photon_energy,
    hydroelec_power,
    wind_turbine_power,
    heat_transfer_rate,
    bbody_rad
};

const vector cards = {pickCueCard};
const vector graphs = {analyzeGraph};

const vector kinematics = {
    vdt,
    avt,
    addVector,
    projectile_motion,
};

const vector dynamics = {
    fma,
    force_pairs,
    sfriction,
    kfriction,
    two_body_grav,
    fm_grav_field,
    grav_field,
    spring_force,
    connected_carts,
    hang_weight_pulley,
    frict_hang_weight_pulley,
};

const vector energy = {
    wfdcos,
    kinetic_en,
    grav_potential_en,
    spring_en,
    pick_question,
    pwt,
    pfv,
    crane_lift_block,
    choose_energy,
    efficiency,
    heat_cap,
    latent_heat,
    calorimeter,
    hydroelec_power,
    wind_turbine_power,
    heat_transfer_rate
};

const vector electromagnetism = {
    iqt,
    veq,
    evit,
    mat_resist,
    ohms_law,
    pir,
    pvr,
    piv,
    circuit_analysis,
    circuit_current_analysis,
    dc_motor_quiz,
    emf_w,
    emf_p,
    internal_resistance,
    solve_transformer_coils
};

const vector waves = {
    wave_speed,
    mach,
    beats,
    doppler_moving_source
};

const vector nuclear = {
    nucleus_charge,
    half_life,
    photon_energy
};

const vector space = {
    bbody_rad
};

const vector<pair<vector<void(*)()>, string>> units = {
    {cards, "Cue cards"},
    {graphs, "Graph analysis"},
    {kinematics, "Kinematics"},
    {dynamics, "Dynamics"},
    {energy, "Energy"},
    {electromagnetism, "Electromagnetism"},
    {waves, "Waves"},
    {space, "Space & Cosmos"},
    {all_questions, "Everything"},
};

int main() {
    srand(time(0));
    cout << "Select your desired activity:\n";
    for (int i = 1; i <= units.size(); i++) {
        cout << units[i - 1].second << " (" << i << ")\n";
    }
    int unit; cin >> unit;
    vector activity = units[unit - 1].first;
    while(true) {
        int task = rand() % activity.size();
        activity[task]();
        next();
    }
    return 0;
}
