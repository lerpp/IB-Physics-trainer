#include <iostream>
#include <string>
#include "iqt.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void iqt() {
    double q = rand() % 1000 / 10.0;
    double t = rand() % 1000 / 100.0;
    double i = roundDouble(q / t, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << q << " C of charge flow through a wire over the course of " << t << "s\nFind the current running through the wire\n";
        double ans; cin >> ans;
        checkAnswerD(ans, i);
    }
    else if (whichone == 1) {
        cout << q << " C of charge flow through a wire pulling " << i << " A of current\nFind the time it takes for that amount of charge to flow through the wire\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
    else {
        cout << "A wire pulls " << i << " A of current for " << t << "s\nFind the charge which ran through the wire\n";
        double ans; cin >> ans;
        checkAnswerD(ans, q);
    }
}