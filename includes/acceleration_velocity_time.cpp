#include <iostream>
#include <string>
#include "input_handling.h"
#include "acceleration_velocity_time.h"

using std::cin, std::cout;

void avt() {
    double v1 = rand() % 1000 / 10.0 + 1.0;
    double v2 = rand() % 1000 / 10.0 + 1.0;
    double deltaV = v2 - v1;
    double t = rand() % 1000 / 10.0 + 1.0;
    double a = roundDouble(deltaV / t, 3);
    int whichone = rand() % 3;
    int splitV = rand() % 2;
    double ans;
    if (whichone == 0) {
        if (splitV == 1) cout << "An object is travelling at " << v1 << " m/s and uniformly accelerates to " << v2 << "m/s over the course of " << t << "s\nFind the object's acceleration\n";
        else cout << "An object changes its velocity by " << deltaV << " m/s over the course of " << t << "s\nFind the object's acceleration\n";
        cin >> ans;
        checkAnswerD(ans, a);
    }
    else if (whichone == 1) {
        if (splitV == 1) cout << "An object is travelling at " << v1 << " m/s and accelerates to " << v2 << " m/s by accelerating at " << a << " m/s^2\nFind the time elapsed\n";
        else cout << "An object changes its velocity by " << deltaV << " m/s by accelerating at " << a << " m/s^2\nFind the time elapsed\n";
        cin >> ans;
        checkAnswerD(ans, t);
    }
    else {
        if (splitV == 1) {
            int whichV = rand() % 2;
            if (whichV == 0) {
                cout << "An object is travelling at " << v1 << " m/s and accelerates at " << a << " m/s^2 for " << t << "s\nind the final velocity\n";
                cin >> ans;
                checkAnswerD(ans, v2);
            }
            else {
                cout << "An object accelerates at " << a << " m/s^2 for " << t << "s to a final velocity of " << v2 << " m/s\nFind the initial velocity\n";
                cin >> ans;
                checkAnswerD(ans, v1);
            }
        }
        else {
            cout << "An object accelerates at " << a << " m/s^2 for " << t << "s\nFind the change in velocity\n";
            cin >> ans;
            checkAnswerD(ans, deltaV);
        }
    }
}
