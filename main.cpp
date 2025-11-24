#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include "includes/cue_cards.h"
#include "includes/acceleration_velocity_time.h"
#include "includes/velocity_distance_time.h"
#include "includes/graph_analysis.h"
#include "includes/add_vectors.h"
#include "includes/projectile_motion.h"
#include "includes/fma.h"
#include "includes/continue.h"
#include "includes/force_pairs.h"
#include "includes/friction.h"
#include "includes/grav_attraction.h"
#include "includes/spring_force.h"
#include "includes/connected_carts.h"
#include "includes/hanging_weight_pulley.h"
#include "includes/wfd.h"
#include "includes/mech_energy.h"

using std::vector, std::string, std::cin, std::cout, std::ws;

const vector questions = {
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
    pick_question
};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
        next();
    }
    return 0;
}
