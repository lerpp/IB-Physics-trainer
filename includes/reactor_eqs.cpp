#include <iostream>
#include <string>
#include "reactor_eqs.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

const double g = 9.81;
const double h20_density = 1000.0;
const double air_density = 1.225;

void hydroelec_power() {
    double h = rand() % 1000 / 10.0;
    double q = rand() % 1000 / 10.0;
    double p = roundDouble(h * q * g * h20_density, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A hydroelectric power plant lets water fall a height of " << h << " m, with a total water flow rate of " << q << " m^3 / s\nFind the power of the reactor\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "A hydroelectric power plant with power " << p << " W lets water fall from " << h << " m\nFind the flow rate of the water through the plant\n";
        double ans; cin >> ans;
        checkAnswerD(ans, q);
    }
    else if (whichone == 2) {
        cout << "A hydroelectric power plant with power " << p << " W has a flow rate of " << q << " m^3 / s\nFind the height at which the water falls from\n";
        double ans; cin >> ans;
        checkAnswerD(ans, h);
    }
}

void wind_turbine_power() {
    double a = rand() % 1000 / 10.0;
    double v = rand() % 3000 / 100.0;
    double p = roundDouble(0.5 * air_density * a * v*v*v, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A wind turbine has blades covering a total area of " << a << " m^2 and is catching air travelling at " << v << " m/s\nFind the power of the turbine\nTake the density of air to be " << air_density << " kg / m^3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "A wind turbine with power " << p << " W has blades covering a total area of " << a << " m^2\nFind the speed the air is travelling at\nTake the density of air to be " << air_density << " kg / m^3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 2) {
        cout << "A wind turbine with power " << p << " W is catching air travelling at " << v << " m/s\nFind the area which the turbine's blades cover\nTake the density of air to be " << air_density << " kg / m^3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, a);
    }
}