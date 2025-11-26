#include <iostream>
#include <string>
#include <windows.h>
#include "ohms_law.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void ohms_law() {
    double r = rand() % 1000 / 10.0;
    double i = rand() % 1000 / 100.0;
    double v = roundDouble(r * i, 3);
    SetConsoleOutputCP(CP_UTF8);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A lightbulb with voltage " << v << " V pulls " << i << " A of current\nFind the resistance of the lightbulb\n";
        double ans; cin >> ans;
        checkAnswerD(ans, r);
    }
    else if (whichone == 1) {
        cout << "A lightbulb has voltage " << v << " V and resistance " << r << " Ω\nFind the current the lightbulb pulls\n";
        double ans; cin >> ans;
        checkAnswerD(ans, i);
    }
    else {
        cout << "A lightbulb has resistance " << r << " Ω and pulls " << i << " A of current\nFind the voltage across the lightbulb\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
}