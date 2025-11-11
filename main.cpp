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

using std::vector, std::string, std::cin, std::cout, std::ws;

const vector questions = {
    pickCueCard,
    analyzeGraph,
    vdt,
    avt,
    addVector,
    projectile_motion,
    fma
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
