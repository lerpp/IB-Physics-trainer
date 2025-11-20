#include <iostream>
#include <string>
#include <cmath>
#include "wfd.h"
#include "add_vectors.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void wfdcos() {
    double theta;
    int decidetheta = rand() % 3;
    if (decidetheta == 0) theta = 0;
    else if (decidetheta == 1) theta = 90;
    else theta = rand() % 900 / 10.0;
    double f = rand() % 1000 / 10.0;
    double d = rand() % 1000 / 100.0;
    double w = roundDouble(f * d * cos(degToRad(theta)), 3);
    if (theta == 90) w = 0;
    int whichone = 3;
    if (whichone == 0) {
        cout << "A person pulls a box with a force of " << f << "N for " << d << "m at an angle " << theta << " degrees to the ground\nFind the work done\n";
        double ans; cin >> ans;
        checkAnswerD(ans, w);
    }
    else if (whichone == 1) {
        cout << "A person pulls a box with a force of " << f << "N at an angle " << theta << " degrees to the ground\nHe does " << w << "J of work in total\nFind the displacement of the box\n";
        double ans; cin >> ans;
        checkAnswerD(ans, d);
    }
    else if (whichone == 2) {
        cout << "A person pulls a box for " << d << "m at an angle " << theta << " degrees to the ground\nHe does " << w << "J of work in total\nFind the force with which the person pulled the box\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f);
    }
    else {
        cout << "A person pulls a box with force " << f << "N for " << d << "m, doing " << w << "J of work in total\nFind the angle with which he pulled the box relative to the ground\n";
        double ans; cin >> ans;
        checkAnswerD(ans, theta);
    }
}