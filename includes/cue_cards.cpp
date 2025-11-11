#include <iostream>
#include <vector>
#include <string>
#include "cue_cards.h"
#include "continue.h"

using std::vector, std::cin, std::cout, std::pair, std::string;

const vector<pair<string, string>> cueCards = {
    {"What is the difference between a vector and a scalar?", "A scalar has magnitude only, no direction. Examples of scalars are speed and height\nVectors have magnitude and distance. Examples of vectors include displacement and velocity"},
    {"What is the difference between distance and displacement?", "Distance is the total distance travelled while displacement is your position relative to your starting position\nIf I walk 10 meters forwards and 10 meters backward, my distance travelled is 20m while my displacement is 0m"},
    {"What is free fall?", "Free fall is when an object experiences no forces acting on it except for gravity"},
    {"What is terminal velocity?", "Terminal velocity is the speed an object travels at where the force of air resistance is equal to the force of gravity.\nOnce an object reaches terminal velocity, it will not accelerate or decelerate unless its cross-sectional surface area changes"},
    {"What is a projectile?", "A projectile is an object given an initial thrust and then allowed to soar through the air under the influence of gravity alone"},
    {"What is the definition for the range of a projectile?", "The horizontal displacement of the projectile"},
    {"What is translational equilibrium?", "An object is in translational equilibrium if the net force acting on it is 0"}
};

void pickCueCard() {
    cout << "Cue Card\n";
    int card = rand() % cueCards.size();
    cout << cueCards[card].first << "\n";
    next();
    cout << cueCards[card].second << "\n";
}
