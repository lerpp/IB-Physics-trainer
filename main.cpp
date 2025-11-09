#include <iostream>
#include <vector>
#include "includes/cue_cards.h"
#include "includes/acceleration_velocity_time.h"
#include "includes/velocity_distance_time.h"
#include "includes/graph_analysis.h"
#include "includes/add_vectors.h"

using namespace std;

const vector questions = {
    pickCueCard,
    analyzeGraph,
    vdt,
    avt,
    addVector
};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
        string cont; getline(cin >> ws, cont);
    }
    return 0;
}
