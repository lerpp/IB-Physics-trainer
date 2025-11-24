#include <iostream>
#include <string>
#include "mech_energy.h"
#include "input_handling.h"
#include <vector>

using std::cin, std::cout, std::string, std::vector, std::pair;

constexpr double g = 9.8;

void kinetic_en() {
    double m = rand() % 1000 / 10.0;
    double v1 = rand() % 1000 / 100.0;
    double v2 = rand() % 1000 / 100.0;
    double delta_v = roundDouble(v2 - v1, 3);
    double e1 = roundDouble(0.5 * m * v1 * v1, 3);
    double e2 = roundDouble(0.5 * m * v2 * v2, 3);
    double delta_e = roundDouble(e2 - e1, 3);
    int whichone = rand() % 6;
    if (whichone == 0) {
        cout << "An object with mass " << m << "kg is travelling at " << v1 << " m/s\nFind its kinetic energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e1);
    }
    else if (whichone == 1) {
        cout << "An object with mass " << m << "kg has kinetic energy " << e1 << "J\nFind its velocity\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v1);
    }
    else if (whichone == 2) {
        cout << "An object is travelling at " << v1 << " m/s and has kinetic energy " << e1 << "J\nFind its mass\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
    else if (whichone == 3) {
        cout << "An object with mass " << m << "kg is travelling at " << v1 << " m/s\nThe objects accelerates to " << v2 << " m/s\nFind the change in its kinetic energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, delta_e);
    }
    else if (whichone == 4) {
        cout << "An object with mass " << m << "kg accelerates and changes its kinetic energy from " << e1 << "J to " << e2 << "J\nFind the change in the object's velocity\n";
        double ans; cin >> ans;
        checkAnswerD(ans, delta_v);
    }
    else {
        cout << "An object accelerates from " << v1 << " m/s to " << v2 << " m/s, changing its kinetic energy from " << e1 << "J to " << e2 << "J\nFind the object's mass\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
}

void grav_potential_en() {
    double m = rand() % 1000 / 10.0;
    double h1 = rand() % 1000 / 10.0;
    double h2 = rand() % 1000 / 10.0;
    double delta_h = h2 - h1;
    double e1 = roundDouble(m * g * h1, 3);
    double e2 = roundDouble(m * g * h2, 3);
    double delta_e = e2 - e1;
    int whichone = rand() % 6;
    if (whichone == 0) {
        cout << "An object has mass " << m << "kg and is " << h1 << "m above the ground\nFind its gravitational potential energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e1);
    }
    else if (whichone == 1) {
        cout << "An object has mass " << m << "kg and has " << e1 << "J of gravitational potential energy\nFind its height above the ground\n";
        double ans; cin >> ans;
        checkAnswerD(ans, h1);
    }
    else if (whichone == 2) {
        cout << "An object is " << h1 << "m above the ground and has " << e1 << "J of gravitational potential energy\nFind its mass\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
    else if (whichone == 3) {
        cout << "An object has mass " << m << "kg\nOriginally, the object is " << h1 << "m above the ground, but it is moved to be " << h2 << "m above the ground\nFind the change in its gravitational potential energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, delta_e);
    }
    else if (whichone == 4) {
        cout << "An object has mass " << m << "kg\nOriginally, the object has gravitational potential energy " << e1 << "J, but it is moved and now has gravitation potential energy " << e2 << "J\nFind the change in height of the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, delta_h);
    }
    else {
        cout << "An object starts off " << h1 << "m above the ground, but is moved to " << h2 << "m above the ground, changing the gravitational potential energy by " << delta_e << "J in the process\nFind the mass of the object\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
}

void spring_en() {
    double k = rand() % 1000 / 100.0;
    double x1 = rand() % 1000 / 100.0;
    double x2 = rand() % 1000 / 100.0;
    double delta_x = roundDouble(x2 - x1, 3);
    double e1 = roundDouble(0.5 * k * x1 * x1, 3);
    double e2 = roundDouble(0.5 * k * x2 * x2, 3);
    double delta_e = roundDouble(e2 - e1, 3);
    int whichone = rand() % 6;
    if (whichone == 0) {
        cout << "A spring with spring constant " << k << " N/m is compressed by " << x1 << "m\nFind the energy in the spring\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e1);
    }
    else if (whichone == 1) {
        cout << "A spring with spring constant " << k << " N/m has " << e1 << "J of spring energy\nFind the distance the spring was compressed by\n";
        double ans; cin >> ans;
        checkAnswerD(ans, x1);
    }
    else if (whichone == 2) {
        cout << "A spring is compressed by " << x1 << "m and has " << e1 << "J of spring energy\nFind the spring constant of the spring\n";
        double ans; cin >> ans;
        checkAnswerD(ans, k);
    }
    else if (whichone == 3) {
        cout << "A spring with spring constant " << k << " N/m is initially compressed by " << x1 << "m, but is changed to be compressed by " << x2 << "m\nFind the change in spring energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, delta_e);
    }
    else if (whichone == 4) {
        cout << "A spring with spring constant " << k << " N/m initially has spring energy " << e1 << "N, but due to changes in its compression, it changes to " << e2 << "N\nFind the change in displacement of the spring\n";
        double ans; cin >> ans;
        checkAnswerD(ans, delta_x);
    }
    else {
        cout << "A spring is compressed by " << x1 << "m, but is then changed to be compressed by " << x2 << "m, changing its spring energy by " << delta_e << "J in the process\nFind the spring constant\n";
        double ans; cin >> ans;
        checkAnswerD(ans, k);
    }
}

const vector<pair<string, string>> mech_en_questions = {
    {"An apple falls from a tree. Assuming negligible air resistance, compare the mechanical energy of the apple before and after it falls\nIs it: (increased/decreased/unchanged)", "unchanged"},
    {"An apple falls from a tree. Is there work done on the apple?\n(yes/no)", "yes"},
    {"A block is pulled up a slope at constant speed over a distance of 30m\nIs there work being done on the block?\n(yes/no)", "no"},
    {"A block is pulled over a rough surface at constant speed for a distance of 30m\nIs there work being done on the block\n(yes/no)?", "no"},
    {"A block slides across a rough surface. Is the mechanical energy of the block: (increasing/decreasing/unchanged)", "decreasing"}
};

void pick_question() {
    auto [question, sol] = mech_en_questions[rand() % mech_en_questions.size()];
    cout << question << '\n';
    string ans; cin >> ans;
    checkAnswerS(ans, sol);
}
