#include <bits/stdc++.h>
#include "input_handling.h"
#nclude "velocity_distance_time.h"

using namespace std;

void vdt() {
    double d = rand() % 1000 / 10.0 + 1.0;
    double t = rand() % 1000 / 10.0 + 1.0;
    double v = roundDouble(d / t, 3);
    int whichone = rand() % 3;
    double ans;
    if (whichone == 0) {
        cout << "An object travels " << d << "m in " << t << "s\nFind the object's velocity\n";
        cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 1) {
        cout << "An object travels at " << v << " m/s for " << t << "s\nFind its displacement\n";
        cin >> ans;
        checkAnswerD(ans, d);
    }
    else {
        cout << "An object travels at " << v << " m/s for " << d << "m\nFind the elapsed time\n";
        cin >> ans;
        checkAnswerD(ans, t);
    }
}

