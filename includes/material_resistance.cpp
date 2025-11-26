#include <iostream>
#include <string>
#include <windows.h>
#include "material_resistance.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void mat_resist() {
    double p = rand() % 1000;
    double l = rand() % 1000 / 100.0;
    double a = rand() % 1000 / 100.0;
    double r = roundDouble(p * l / a, 3);
    SetConsoleOutputCP(CP_UTF8);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "A resistor has resistivity " << p << " Ω m, length " << l << "m, and cross-sectional area " << a << " m^2\nFind its resistance\n";
        double ans; cin >> ans;
        checkAnswerD(ans, r);
    }
    else if (whichone == 1) {
        cout << "A resistor has length " << l << "m, cross-sectional area " << a << " m^2, and resistance " << r << " Ω\nFind the resistivity of the material\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 2) {
        cout << "A resistor has resistivity " << p << " Ω m, length " << l << "m, and resistance " << r << " Ω\nFind the resistor's cross-sectional area\n";
        double ans; cin >> ans;
        checkAnswerD(ans, a);
    }
    else {
        cout << "A resistor has resistivity " << p << " Ω m, cross-sectional area" << a << " m^2, and resistance " << r << " Ω\nFind the length of the resistor\n";
        double ans; cin >> ans;
        checkAnswerD(ans, l);
    }
}