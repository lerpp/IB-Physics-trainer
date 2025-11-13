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
    {"What is translational equilibrium?", "An object is in translational equilibrium if the net force acting on it is 0"},
    {"What is inertia?", "Inertia is the property of an object that allows it to resist changes in motion. Inertia scales proportionately with mass"},
    {"What is the derived SI unit for Newtons?", "A Newton is the force required to accelerate a 1kg mass at 1 m/s^2\nIts derived SI unit is kg * m / s^2"},
    {"Why can the force of static friction change, while the force of kinetic friction does not?", "The force of static friction is always equal in magnitude and opposite in direction to the applied force\nThe coefficienct of kinetic friction is constant and so the force of kinetic friction is constan also"},
    {"What is Newton's first law of motion?", "An object will not change in motion unless acted upon by a force"},
    {"What is Newton's second law of motion?", "An unbalanced force on an object will cause it to accelerate uniformly in the direction of the force"},
    {"What is Newton's third law of motion?", "For every action force, there is an equal reaction force in the opposite direction"},
    {"What is the unit for the coefficient of friction?", "Trick question! There is no unit (hinted at by the description: coefficient)"},
    {"What is the derived unit for the spring constant?", "The spring constant describes how much force it takes to displace a spring by one meter\nIts SI derived unit is N/m"}
};

void pickCueCard() {
    cout << "Cue Card\n";
    int card = rand() % cueCards.size();
    cout << cueCards[card].first << "\n";
    next();
    cout << cueCards[card].second << "\n";
}
