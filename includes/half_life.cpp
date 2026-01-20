#include <iostream>
#include <string>
#include <cmath>
#include "half_life.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void half_life() {
    double m_i = rand() % 1000 * 100;
    double t = rand() % 1000 / 10.0;
    double h = rand() % 1000 / 100.0;
    double m = roundDouble(m_i * pow(0.5, t / h), 3);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << m_i << " g of a substance with half-life " << h << " s is allowed to decay for " << t << " s\nCalculate the final mass of the sample\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
    else if (whichone == 1) {
        cout << "A substance with half-life " << h << " s is allowed to decay for " << t << " s, ending with a final mass of " << m << " g\nFind the initial mass of the sample\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m_i);
    }
    else if (whichone == 2) {
        cout << m_i << " g of a substance with half-life " << h << " s decays to a final mass of " << m << " g\nFind the period of time over which the substance decayed\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
    else {
        cout << m_i << " g of a substance is allowed to decay for " << t << " s, reaching a final mass of " << m << " g\nFind the half-life of the substance\n";
        double ans; cin >> ans;
        checkAnswerD(ans, h);
    }
}