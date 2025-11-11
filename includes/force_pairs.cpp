#include <vector>
#include <string>
#include <iostream>
#include "force_pairs.h"
#include "continue.h"

using std::vector, std::pair, std::string, std::cout;

const vector<pair<string, string>> pairs = {
    {"A book pushes on the table it lies on", "The table pushes on the book"},
    {"A book experiences weight on earth", "The gravitational pull of the book on the earth"},
    {"A person pushes on a wall", "The wall pushes on the person"},
    {"A person stands on the ground.", "The ground pushes on the person"},
    {"A helicopter's rotors push on the air.", "The air pushes on the rotors"},
    {"A person tugs on a spring", "The spring tugs on the person"}
};

void force_pairs() {
    const pair<string, string> &forcepair = pairs[rand() % pairs.size()];
    cout << forcepair.first << "\nWhat is the corresponding force in the action-reaction force pair?\n";
    next();
    cout << forcepair.second << "\n";
}