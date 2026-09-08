#include <iostream>
#include <string>
#include "heat_transfer_rate.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void heat_transfer_rate() {
    double k = rand() % 1000 / 1000.0;
    double a = rand() % 1000 / 100.0;
    double t = rand() % 1000 / 10.0;
    double l = rand() % 1000 / 100.0;
    double rate = roundDouble(k * a * t / l, 3);
    int whichone = rand() % 5;
    if (whichone == 0) {
        cout << "An object with conductivity " << k << " W/mK, cross-sectional area " << a << " m^2, length " << l << " m and temperature difference of " << t << " K across its ends\nFind the rate of thermal conduction through the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, rate);
    }
    else if (whichone == 1) {
        cout << "An object with cross-sectional area " << a << " m^2, length " << l << " m and temperature difference of " << t << " K across its ends is transferring thermal energy at a rate of " << rate << " J/s\nFind the object's conductivity\n";
        double ans; cin >> ans;
        checkAnswerD(ans, k);
    }
    else if (whichone == 2) {
        cout << "An object with conductivity " << k << " W/mK, length " << l << " m and temperature difference of " << t << " K across its ends is transferring energy at a rate of " << rate << " J/s\nFind the object's cross-sectional area\n";
        double ans; cin >> ans;
        checkAnswerD(ans, a);
    }
    else if (whichone == 3) {
        cout << "An object with conductivity " << k << " W/mK, cross-sectional area " << a << " m^2, and temperature difference of " << t << " K across its ends is transferring energy at a rate of " << rate << " J/s\nFind the object's length\n";
        double ans; cin >> ans;
        checkAnswerD(ans, l);
    }
    else if (whichone == 4) {
        cout << "An object with conductivity " << k << " W/mK, cross-sectional area " << a << " m^2, and length " << l << " m is transferring energy at a rate of " << rate << " J/s\nFind the object's temperature difference across its two ends\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
}