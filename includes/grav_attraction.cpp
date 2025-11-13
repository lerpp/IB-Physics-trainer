#include <cstdlib>
#include <string>
#include <iostream>
#include "grav_attraction.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

constexpr double G = 6.67e-11;

void two_body_grav() {
    double m1 = roundDouble(rand() % static_cast<int>(1e8) * 1e22, 3);
    double m2 = roundDouble(rand() % static_cast<int>(1e8) * 1e22, 3);
    double r = rand() % 1000 * 1e12;
    double f = roundDouble(G * m1 * m2 / r / r, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "Two planets with masses " << m1 << "kg and " << m2 << "kg respectively float in space " << r << "m apart\nFind the force of gravitational attraction between them\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f);
    }
    else if (whichone == 1) {
        cout << "Two planets float in space " << r << "m from one another\nPlanet 1 has mass " << m1 << "kg\nThe force of gravitational attraction between the two planets is " << f << "N\nFind the mass of planet 2\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m2);
    }
    else if (whichone == 2) {
        cout << "Two planets have masses " << m1 << "kg and " << m2 << "kg respectively\nThe force of gravitational attraction between them is " << f << "N\nFind the distance between the planets\n";
        double ans; cin >> ans;
        checkAnswerD(ans, r);
    }
}

void fm_grav_field() {
    double f = rand() % 1000 / 50.0;
    double m = 50.0 + rand() % 1000 / 10.0;
    double g = roundDouble(f / m, 3);
    cout << "A " << m << "kg man experiences " << f << "N of gravitational force when he stands on a mysterious planet\nFind the strength of the planet's gravitational field\n";
    double ans; cin >> ans;
    checkAnswerD(ans, g);
}

void grav_field() {
    double m = roundDouble(rand() % static_cast<int>(1e8) * 1e22, 3);
    double r = roundDouble(1000.0 + rand() % 1000000, 3);
    double f = roundDouble(G * m / r / r, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A planet with mass " << m << "kg has radius " << r << "m\nFind the strength of its gravitational field\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f);
    }
    else if (whichone == 1) {
        cout << "A planet with mass " << m << "kg has a gravitational field with strength " << f << "N/kg\nFind its radius\n";
        double ans; cin >> ans;
        checkAnswerD(ans, r);
    }
    else {
        cout << "A planet with radius " << r << "m has a gravitational field with strength " << f << "N/kg\nFind its mass\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m);
    }
}