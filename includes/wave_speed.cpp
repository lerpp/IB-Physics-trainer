#include <iostream>
#include <string>
#include <cmath>
#include "wave_speed.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void wave_speed() {
    double f = rand() % 1000 * pow(10, rand() % 10);
    double t = 1 / f;
    double lambda = rand() % 1000 * pow(10, rand() % 10 * -1);
    double v = roundDouble(f * lambda, 3);
    int whichone = rand() % 6;
    if (whichone == 0) {
        cout << "A wave has frequency " << f << " Hz and wavelength " << lambda << " m\nFind the speed of the wave\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 1) {
        cout << "A wave has frequency " << f << " Hz and speed " << v << " m/s\nFind its wavelength\n";
        double ans; cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else if (whichone == 2) {
        cout << "A wave has wavelength " << lambda << " m and speed " << v << " m/s\nFind the frequency of the wave\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f);
    }
    else if (whichone == 3) {
        cout << "A wave has period " << t << " s and wavelength " << lambda << " m\nFind the speed of the wave\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 4) {
        cout << "A wave has period " << t << " s and speed " << v << " m/s\nFind its wavelength\n";
        double ans; cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else if (whichone == 5) {
        cout << "A wave has wavelength " << lambda << " m and speed " << v << " m/s\nFind the period of the wave\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
}