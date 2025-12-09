#include <iostream>
#include <string>
#include "electromotive_force.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void emf_w() {
    double w = rand() % 1000 / 10.0;
    double q = rand() % 1000 / 100.0;
    double epsilon = roundDouble(w / q, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A battery does " << w << " J of work on " << q << " C of charge\nFind the electromotive force in the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, epsilon);
    }
    else if (whichone == 1) {
        cout << "A battery does " << w << " J of work with " << epsilon << " V of electromotive force\nFind the amount of charge which ran through the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, q);
    }
    else {
        cout << "A battery does work on " << q << " C of charge with " << epsilon << " V of electromotive force\nFind the work done by the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, w);
    }
}

void emf_p() {
    double p = rand() % 1000 / 10.0;
    double i = rand() % 1000 / 100.0;
    double epsilon = roundDouble(p / i, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A battery does " << p << " J of work on " << i << " C of charge\nFind the electromotive force in the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, epsilon);
    }
    else if (whichone == 1) {
        cout << "A battery does " << p << " J of work with " << epsilon << " V of electromotive force\nFind the amount of charge which ran through the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, i);
    }
    else {
        cout << "A battery does work on " << i << " C of charge with " << epsilon << " V of electromotive force\nFind the work done by the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
}

void internal_resistance() {
    double i = rand() % 1000 / 100.0;
    double R = rand() % 1000 / 100.0;
    double r = rand() % 1000 / 100.0;
    double epsilon = roundDouble(i * (r + R), 3);
    double v = roundDouble(i * R, 3);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "The electromotive force of a battery is " << epsilon << " V\nWhen " << i << " A of current runs through it, the internal resistance is " << r << " ohms\nFind the voltage across the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 1) {
        cout << "The electromotive force of a battery is " << epsilon << " V\nWhen " << i << " A of current runs through it, the voltage across the battery is " << v << "V\nFind the internal resistance of the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, r);
    }
    else if (whichone == 2) {
        cout << "The electromotive force of a battery is " << epsilon << " V and its internal resistance is " << r << " ohms\nWhen current is run through it, the voltage across the battery is " << v << " V\nFind the curren tthrough the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, i);
    }
    else {
        cout << "A battery has internal resistance " << r << " ohms\nWhen " << i << " A of current is run through it, the voltage across the battery is " << v << " V\nFind the electromotive force of the battery\n";
        double ans; cin >> ans;
        checkAnswerD(ans, epsilon);
    }
}