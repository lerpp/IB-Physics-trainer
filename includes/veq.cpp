#include <iostream>
#include <string>
#include "veq.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void veq() {
    double e = rand() % 1000 / 10.0;
    double q = rand() % 1000 / 100.0;
    double v = roundDouble(e / q, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "Some current electricity with a charge of " << q << " C runs across a lightbulb, doing work and lowering its potential energy by " << e << "J\nFind the voltage drop\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 1) {
        cout << "Some current electricity runs across a lightbulb, doing work and lowering its potential energy by " << e << "J, resulting in a voltage drop of " << v << " V\nFind the charge of the electricity\n";
        double ans; cin >> ans;
        checkAnswerD(ans, q);
    }
    else {
        cout << "Some current electricity with a charge of " << q << " C runs across a lightbulb, doing work and resulting in a voltage drop of " << v << " V\nFind the drop in potential energy of the electricity\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e);
    }
}