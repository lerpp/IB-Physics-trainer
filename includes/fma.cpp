#include "fma.h"
#include "input_handling.h"
#include <cstdlib>
#include <iostream>
#include <string>

using std::string, std::cin, std::cout;


void fma() {
    double mass = rand() % 1000 / 10.0;
    double acceleration = rand() % 1000 / 100.0;
    double force = roundDouble(mass * acceleration, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "An object with mass " << mass << "kg is accelerating at " << acceleration << " m/s^2\nFind the net force on the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, force);
    }
    else if (whichone == 1) {
        cout << "An object with mass " << mass << "kg experiences a net force of " << force << " N\nFind the acceleration of the object";
        double ans; cin >> ans;
        checkAnswerD(ans, acceleration);
    }
    else {
        cout << "An object experiences a net force of " << force << "N and accelerates at " << acceleration << " m/s^2\nFind the mass of the object";
        double ans; cin >> ans;
        checkAnswerD(ans, mass);
    }
}