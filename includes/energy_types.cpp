#include <iostream>
#include <string>,
#include <vector>
#include "energy_types.h"
#include "input_handling.h"
#include "continue.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, string>> energy_types = {
    {"mechanical", "Energy possessed by objects that are primarily affected by the force of gravity and frictional forces"},
    {"gravitational", "Energy possessed by objects that are affected by the force of gravity; applies to all objects on Earth (and the universe)"},
    {"radiant", "Energy possessed by oscillating electric and magnetic fields"},
    {"static electrical", "Energy possessed by accumulated static charges"},
    {"current electrical", "Energy possessed by flowing charges"},
    {"thermal", "Energy possessed by randomly moving atoms and molecules"},
    {"sound", "Energy possessed by large groups of oscillating atoms and molecules"},
    {"nuclear", "Energy possessed by protons & neutrons in atomic nuclei"},
    {"elastic", "Energy possessed by materials that are stretched, compressed, or twisted and tend to return to their original shape"},
    {"chemical", "Energy associated with bonds in molecules"}
};

void choose_energy() {
    auto [energy, def] = energy_types[rand() % energy_types.size()];
    cout << "What is " << energy << " energy?\n";
    next();
    cout << def << '\n';
}