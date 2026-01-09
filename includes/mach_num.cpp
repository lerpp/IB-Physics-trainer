#include <iostream>
#include <string>
#include <cmath>
#include "mach_num.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void mach() {
    double v_sound = 343 + rand() % 1000 / 100.0 * pow(-1, rand() % 2);
    double m = rand() % 1000 / 100.0;
    double v = roundDouble(m * v_sound, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A plane is travelling at " << v << " m/s\nThe local speed of sound is " << v_sound << " m/s\nFind the plane's mach number\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
    else if (whichone == 1) {
        cout << "A plane is travelling at " << v << " m/s and has a mach number of " << m << "\nFind the local speed of sound\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v_sound);
    }
    else {
        cout << "A plane is travelling at mach " << m << " with a local speed of sound of " << v_sound << " m/s\nFind the speed of the plane\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
}