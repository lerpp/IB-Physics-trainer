#include <iostream>
#include <string>
#include <cstdlib>
#include "spring_force.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void spring_force() {
    double x = rand() % 1000 / 10.0;
    double k = roundDouble(rand() % 5000 / 5.0, 3);
    double fh = roundDouble(k * x, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A spring with spring constant " << k << "N/m is extended by " << x << "m\nFind the spring force\n";
        double ans; cin >> ans;
        checkAnswerD(ans, fh);
    }
    else if (whichone == 1) {
        cout << "A spring with spring constant " << k << "N/m is extended and produces " << fh << "N of force\nFind the amount the spring was extended by\n";
        double ans; cin >> ans;
        checkAnswerD(ans, x);
    }
    else {
        cout << "A spring is extended by " << x << "m and produces a force of " << fh << "N\nFind the spring constant\n";
        double ans; cin >> ans;
        checkAnswerD(ans, k);
    }
}