#include <iostream>
#include <string>
#include <cmath>
#include "wave_beats.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void beats() {
    double f1 = rand() % 1000 * pow(10, rand() % 8 - 1);
    double f2 = roundDouble(f1 * (rand() % 1000 / 1000.0 + 1), 3);
    double f_b = fabs(f1 - f2);
    int whichone = rand() % 2;
    if (whichone == 0) {
        cout << "Two sound waves with frequencies " << f1 << " Hz and " << f2 << " Hz are played together\nFind the frequency of the resulting beat\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f_b);
    }
    else {
        cout << "Two sound waves are played together. The one with lower frequency has frequency " << f1 << " Hz, and the resulting beat has frequency " << f_b << " Hz\nFind the frequency of the second wave\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f2);
    }
}