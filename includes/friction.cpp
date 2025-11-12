#include <cstdlib>
#include <string>
#include <iostream>
#include "friction.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

const double gravity = 9.8;

void sfriction() {
    double mu = rand() % 50 / 100.0;
    double mass = rand() % 1000 / 10.0;
    double fn = roundDouble(mass * gravity, 3);
    double ff = roundDouble(fn * mu, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "An object with mass " << mass << "kg sits on a rough table and can be pushed with " << ff << "N of force without moving\nFind the coefficient of friction between the object and the table\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mu);
    }
    else if (whichone == 1) {
        cout << "An object with mass " << mass << "kg sits on a rough table. The coefficient of friction between the object and the table is " << mu << "\nCalculate the maximum force of static friction on the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, ff);
    }
    else {
        cout << "An object sits on a rough table. The coefficient of friction between the object and the table is " << mu << " and the object will not move when pushed with up to " << ff << "N of force\nCalculate the mass of the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mass);
    }
}

void kfriction() {
    double mu = rand() % 50 / 100.0;
    double mass = rand() % 1000 / 10.0;
    double fg = roundDouble(mass * gravity, 3);
    double ff = roundDouble(mu * fg, 3);
    double fa = ff;
    if (rand() % 2) fa += rand() % 500 / 10.0;
    fa = roundDouble(fa, 3);
    double fnet = roundDouble(fa - ff, 3);
    double acceleration = roundDouble(fnet / mass, 3);
    int whichone = rand() % 8;
    if (whichone == 0) {
        cout << "An object with mass " << mass << "kg is pushed across a rough table. The coefficient of friction between the table and the object is " << mu << "\nFind the force of kinetic friction acting on the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, ff);
    }
    else if (whichone == 1) {
        cout << "An object with mass " << mass << "kg is pushed across a rough table with force " << fa << "N\nThe acceleration of the object is " << acceleration << " m/s^2\nFind the force of kinetic friction acting on the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, ff);
    }
    else if (whichone == 2) {
        cout << "An object with mass " << mass << "kg is pushed across a rough table with force " << fa << "N\nThe acceleration of the object is " << acceleration << " m/s^2\nFind the coefficient of kinetic friction acting on the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mu);
    }
    else if (whichone == 3) {
        cout << "An object with mass " << mass << "kg is pushed across a rough table and experiences " << ff << "N of kinetic friction\nFind the coefficient of friction between the object and the table\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mu);
    }
    else if (whichone == 4) {
        cout << "An object is pushed across a rough table with force " << fa << "N\nThe coefficient of friction between the object and the table is " << mu << "\nThe net force acting on the object is " << fnet << "N\nFind the mass of the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mass);
    }
    else if (whichone == 5) {
        cout << "An object is pushed across a rough table and experiences " << ff << "N of kinetic friction\nThe coefficient of friction between the object and the table is " << mu << "\nFind the mass of the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mass);
    }
    else if (whichone == 6) {
        cout << "An object with mass " << mass << "kg is pushed across a rough table with " << fa << "N of force\n The coefficient of friction between the object and the table is " << mu << "\nFind the net force acting on the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, fnet);
    }
    else {
        cout << "An object with mass " << mass << "kg is pushed across a rough table. The coefficient of friction between the object and the table is " << mu << " and the acceleration of the object is " << acceleration << " m/s^2\nFind the force applied on the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, fa);
    }
}