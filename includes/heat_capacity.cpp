#include <iostream>
#include <string>
#include "heat_capacity.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void heat_cap() {
    double mass = rand() % 1000 / 100.0;
    double capacity = rand() % 1000;
    double temp1 = rand() % 1000 / 100.0;
    double temp2 = rand() % 1000 / 100.0;
    double delta_temp = roundDouble(temp2 - temp1, 3);
    double heat = roundDouble(mass * capacity * delta_temp, 3);
    int whichone = rand() % 8;
    if (whichone == 0) {
        cout << "A material with specific heat capacity " << capacity << " J/(kg * C) and mass " << mass << "kg has its temperature change by " << delta_temp << " C\nFind the difference in thermal energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, heat);
    }
    else if (whichone == 1) {
        cout << "A material with specific heat capacity " << capacity << " J/(kg * C) and mass " << mass << "kg has initial temperature " << temp1 << " C, but changes to " << temp2 << " C\nFind the difference in thermal energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, heat);
    }
    else if (whichone == 2) {
        cout << "A material with mass " << mass << "kg experiences a change in thermal energy by " << heat << "J after its temperature changes by " << delta_temp << " C\nFind the specific heat capacity of the material\n";
        double ans; cin >> ans;
        checkAnswerD(ans, capacity);
    }
    else if (whichone == 3) {
        cout << "A material with mass " << mass << "kg experiences a change in thermal energy by " << heat << "J after its temperature changes from " << temp1 << " C to " << temp2 << " C\nFind the specific heat capacity of the material\n";
        double ans; cin >> ans;
        checkAnswerD(ans, capacity);
    }
    else if (whichone == 4) {
        cout << "A material with specific heat capacity " << capacity << " J/(kg * C) experiences a change in thermal energy of " << heat << "J after a temperature change of " << delta_temp << " C\nFind the mass of the material\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mass);
    }
    else if (whichone == 5) {
        cout << "A material with specific heat capacity " << capacity << " J/(kg * C) experiences a change in thermal energy of " << heat << "J after a temperature change from " << temp1 << " C to " << temp2 << " C\nFind the mass of the material\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mass);
    }
    else if (whichone == 6) {
        cout << "A material with specific heat capacity " << capacity << " J/(kg * C) and mass " << mass << "kg experiences a change in thermal energy of " << heat << "J\nFind the change in temperature\n";
        double ans; cin >> ans;
        checkAnswerD(ans, delta_temp);
    }
    else {
        cout << "A material with specific heat capacity " << capacity << " J/(kg * C) and mass " << mass << "kg experiences a change in thermal energy of " << heat << "J\nIf the material starts off at " << temp1 << " C, find the final temperature of the material\n";
        double ans; cin >> ans;
        checkAnswerD(ans, temp2);
    }
}