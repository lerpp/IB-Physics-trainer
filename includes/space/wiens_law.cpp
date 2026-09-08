#include <iostream>
#include <string>
#include "wiens_law.h"
#include "../input_handling.h"

using std::cin, std::cout, std::string;

const double wien = 2.9e-3;

void wiens_displacement_law() {
    double lambda = rand() % 1000 / 1e9;
    double t = roundDouble(wien / lambda, 3);
    int whichone = rand() % 2;
    if (whichone == 0) {
        cout << "A star has temperature " << t << " K\nFind its peak emitted wavelength\n";
        double ans; cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else if (whichone == 1) {
        cout << "A star's peak emitted wavelength is " << lambda * 1e9 << " nm\nFind the star's temperature\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
}