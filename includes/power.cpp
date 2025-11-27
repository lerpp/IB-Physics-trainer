#include <iostream>
#include <string>
#include <windows.h>
#include "power.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

constexpr double g = 9.8;

void pfv() {
    double f = rand() % 1000 / 10.0;
    double v = rand() % 1000 / 100.0;
    double p = roundDouble(f * v, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A block travels at " << v << " m/s, propelled by a force of " << f << "N\nFind the power of the force\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "A block is propelled by a force of " << f << "N with " << p << "W of power\nAssume the block has constant velocity\nFind the block's velocity\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else {
        cout << "A block travels at " << v << " m/s, propelled by a force with power " << p << "W\nFind the strength of the force\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f);
    }
}

void pwt() {
    double w = rand() % 1000 / 10.0;
    double t = rand() % 1000 / 100.0;
    double p = roundDouble(w / t, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A person pulls on a block of wood, doing " << w << "J of work on it over " << t << "s\nFind the power of the person\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "A person with power " << p << "W pulls on a block of wood, doing " << w << "J of work on it\nFind the time elapsed\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
    else {
        cout << "A person with power " << p << "W pulls on a block of wood for " << t << "s\nFind the amount of work done\n";
        double ans; cin >> ans;
        checkAnswerD(ans, w);
    }
}

void crane_lift_block() {
    double p = roundDouble(250 + rand() % 1000, 3);
    double m = rand() % 1000 / 10.0;
    double fg = roundDouble(m * g, 3);
    double v = roundDouble(p / fg, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A crane with power " << p << "W lifts a block with mass " << m << "kg\nFind the speed the block travels at\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 1) {
        cout << "A crane with power " << p << "W can lift a block at a maximum speed of " << v << " m/s\nFind the mass of the block\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
    else {
        cout << "A crane can lift a block with mass " << m << "kg at a maximum speed of " << v << " m/s\nFind the power of the crane\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
}

void piv() {
    double i = rand() % 1000 / 100.0;
    double v = rand() % 1000 / 10.0;
    double p = roundDouble(i * v, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "The voltage across a heater is measured to be " << v << " V\nThe heater has " << i << " A of current running through it\nFind the power of the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "The voltage across a heater is measured to be " << v << " V\nThe power of the heater is " << p << " W\nFind the current running through the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, i);
    }
    else {
        cout << "A heater with power " << p << " W has " << i << " A of current running through it\nFind the voltage across the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
}

void pir() {
    SetConsoleOutputCP(CP_UTF8);
    double i = rand() % 1000 / 100.0;
    double r = rand() % 1000 / 10.0;
    double p = roundDouble(i * i * r, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "The resistance of a heater is measured to be " << r << " Ω\nThe heater has " << i << " A of current running through it\nFind the power of the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "The resistance of a heater is measured to be " << r << " Ω\nThe power of the heater is " << p << " W\nFind the current running through the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, i);
    }
    else {
        cout << "A heater with power " << p << " W has " << i << " A of current running through it\nFind the resistance of the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, r);
    }
}

void pvr() {
    SetConsoleOutputCP(CP_UTF8);
    double r = rand() % 1000 / 100.0;
    double v = rand() % 1000 / 10.0;
    double p = roundDouble(v * v / r, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "The voltage across a heater is measured to be " << v << " V\nThe heater has " << r << " Ω of resistance\nFind the power of the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "The voltage across a heater is measured to be " << v << " V\nThe power of the heater is " << p << " W\nFind the resistance of the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, r);
    }
    else {
        cout << "A heater with power " << p << " W has " << r << " Ω of current running through it\nFind the voltage across the heater\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
}
