#include <iostream>
#include <string>
#include "latent_heat.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void latent_heat() {
    double mass = rand() % 1000 / 100.0;
    double l_heat = rand() % 1000;
    double heat = roundDouble(mass * l_heat, 3);
    int whichone = rand() % 2;
    if (whichone == 0) {
        cout << "A material with mass " << mass << "kg has a latent heat of " << l_heat << " kJ/kg\nFind the amount of heat required to change the state of the material (in kJ)\n";
        double ans; cin >> ans;
        checkAnswerD(ans, heat);
    }
    else if (whichone == 1) {
        cout << "A material with mass " << mass << "kg requires " << heat << "kJ of energy to change states\nFind the material's latent heat (in kJ/kg)\n";
        double ans; cin >> ans;
        checkAnswerD(ans, l_heat);
    }
    else {
        cout << "A material with latent heat " << l_heat << " kJ/kg requires " << heat << "kJ of energy to change states\nFind the material's mass\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mass);
    }
}