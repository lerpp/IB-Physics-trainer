#include <iostream>
#include <string>
#include "connected_carts.h"
#include "input_handling.h"

using std::string, std::cin, std::cout;

constexpr double g = 9.8;

void connected_carts() {
    double m1 = rand() % 1000 / 1.0;
    double m2 = rand() % 1000 / 1.0;
    double m3 = rand() % 1000 / 1.0;
    double mu = rand() % 2 * (rand() % 1000 / 1000.0);
    double ff1 = roundDouble(m1 * g * mu, 3);
    double ff2 = roundDouble(m2 * g * mu, 3);
    double ff3 = roundDouble(m3 * g * mu, 3);
    double a = rand() % 1000 / 100.0;
    double fa = roundDouble((m1 + m2 + m3) * a + ff1 + ff2 + ff3, 3);
    double ft23 = roundDouble(m3 * a + ff3, 3);
    double ft12 = roundDouble((m2 + m3) * a + ff2 + ff3, 3);

    cout << "Three carts are tied together by rope. Cart 1 is the furthest to the right and cart 3 is the furthest to the left\n";

    int whichone = 10;
    if (whichone == 0) {
        cout << "The masses of cart 1, 2, 3 are " << m1 << "kg, " << m2 << "kg, and " << m3 << "kg respectively\nThe coefficient of friction between the carts and the floor is " << mu << "\nA person pulls on cart 1 to the right with a force of " << fa << "N\nFind the tension in the rope between carts 1 and 2\n";
        double ans; cin >> ans;
        checkAnswerD(ans, ft12);
    }
    else if (whichone == 1) {
        cout << "The masses of cart 1, 2, 3 are " << m1 << "kg, " << m2 << "kg, and " << m3 << "kg respectively\nThe coefficient of friction between the carts and the floor is " << mu << "\nA person pulls on cart 1 to the right with a force of " << fa << "N\nFind the tension in the rope between carts 2 and 3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, ft23);
    }
    else if (whichone == 2) {
        cout << "The masses of cart 1, 2, 3 are " << m1 << "kg, " << m2 << "kg, and " << m3 << "kg respectively\nThe coefficient of friction between the carts and the floor is " << mu << "\nA person pulls on cart 1, causing a tension force of " << ft23 << "N between carts 2 and 3\nFind the force with which the person pulled on cart 1\n";
        double ans; cin >> ans;
        checkAnswerD(ans, fa);
    }
    else if (whichone == 3) {
        cout << "The masses of cart 1, 2, 3 are " << m1 << "kg, " << m2 << "kg, and " << m3 << "kg respectively\nThe coefficient of friction between the carts and the floor is " << mu << "\nA person pulls on cart 1, causing a tension force of " << ft12 << "N between carts 1 and 2\nFind the force with which the person pulled on cart 1\n";
        double ans; cin >> ans;
        checkAnswerD(ans, fa);
    }
    else if (whichone == 4) {
        cout << "The mass of cart 3 is " << m3 << "kg\nThe coefficient of friction between the carts and the ground is " << mu << "\nA person pulls on cart 1\nThe force of tension between carts 2 and 3 is " << ft23 << "N\nFind the acceleration of the carts\n";
        double ans; cin >> ans;
        checkAnswerD(ans, a);
    }
    else if (whichone == 5) {
        cout << "The mass of cart 3 is " << m3 << "kg\nA person pulls on cart 1, accelerating the carts at " << a << " m/s^2\nThe force of tension between carts 2 and 3 is " << ft23 << "N\nFind the coefficient of friction between the carts and the ground\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mu);
    }
    else if (whichone == 6) {
        cout << "The mass of cart 2 is " << m2 << "kg\nA person pulls on cart 1, accelerating the carts at " << a << " m/s^2\nThe force of tension between carts 1 and 2 is " << ft12 << "N\nThe force of tension between carts 2 and 3 is " << ft23 << "N\nFind the coefficient of friction between the carts and the ground\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mu);
    }
    else if (whichone == 7) {
        cout << "The mass of cart 1 is " << m1 << "kg\nA person pulls on cart 1 with force " << fa << "N, accelerating the carts at " << a << " m/s^2\nThe force of tension between carts 1 and 2 is " << ft12 << "N\nFind the coefficient of friction between the carts and the ground\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mu);
    }
    else if (whichone == 8) {
        cout << "The force of friction on cart 3 is " << ff3 << "N\nA person pulls on cart 1, accelerating the carts at " << a << " m/s^2\nThe force of tension between carts 2 and 3 is " << ft23 << "N\nFind the mass of cart 3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m3);
    }
    else if (whichone == 9) {
        cout << "The force of friction on cart 2 is " << ff2 << "N\nA person pulls on cart 1, accelerating the carts at " << a << " m/s^2\nThe force of tension between carts 1 and 2 is " << ft12 << "N\nThe force of tension between carts 2 and 3 is " << ft23 << "N\nFind the mass of cart 2\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m2);
    }
    else {
        cout << "The force of friction on cart 1 is " << ff1 << "N\nA person pulls on cart 1 with force " << fa << "N, accelerating the carts at " << a << " m/s^2\nThe force of tension between carts 1 and 2 is " << ft12 << "N\nFind the mass of cart 1\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m1);
    }
}