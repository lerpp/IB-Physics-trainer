#include <iostream>
#include <string>
#include "evit.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void evit() {
    double v = rand() % 1000 / 10.0;
    double i = rand() % 1000 / 10.0;
    double t = rand() % 1000 / 10.0;
    double e = roundDouble(v * i * t, 3);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "The voltage drop across a lightbulb is measured to be " << v << " V\nThe lightbulb pulls " << i << " A of electricity over the course of " << t << "s\nFind the change in potential energy of the current running through the lightbulb\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e);
    }
    else if (whichone == 1) {
        cout << "The voltage drop across a lightbulb is measured to be " << v << " V\nThe lightbulb pulls " << i << " A of electricity and reduces its potential enregy by " << e << "J while it is on\nFind how long the lightbulb was on for\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
    else if (whichone == 2) {
        cout << "The voltage drop across a lightbulb is measured to be " << v << " V\nThe lightbulb is turned on for " << t << "s, lowering the potential energy of the current it pulls by " << e << "J\nFind the amount of current the lightbulb pulled\n";
        double ans; cin >> ans;
        checkAnswerD(ans, i);
    }
    else {
        cout << "A lightbulb is turned on for " << t << "s, pulling " << i << " A of current and reducing the current's potential energy by " << e << "J\nFind the voltage across the lightbulb\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
}