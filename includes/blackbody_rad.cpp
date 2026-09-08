#include <iostream>
#include <string>
#include "blackbody_rad.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

const double sigma = 5.67e-8;

void bbody_rad() {
    double e = rand() % 2 ? 1 : rand() % 1000 / 1000.0;
    double a = rand() % 1000 * 100;
    double t = rand() % 3000;
    double p = roundDouble(e * sigma * a * t*t*t*t, 3);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "A body has emissivity " << e << ", surface area " << a << " m^2, and temperature " << t << " K\nFind the power radiated by the body\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "A body radiating " << p << " W has emissivity " << e << " and surface area " << a << " m^2\nFind the body's temperature\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
    else if (whichone == 2) {
        cout << "A body radiating " << p << " W has emissivity " << e << " and temperature " << t << " K\nFind the body's surface area\n";
        double ans; cin >> ans;
        checkAnswerD(ans, a);
    }
    else if (whichone == 3) {
        cout << "A body radiating " << p << " W has surface area " << a << " m^2 and temperature " << t << " K\nFind the emissivity of the body\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e);
    }
}