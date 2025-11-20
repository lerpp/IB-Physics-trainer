#include <iostream>
#include <string>
#include <cstdlib>
#include "hanging_weight_pulley.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

constexpr double g = 9.8;

void hang_weight_pulley() {
    double m1 = rand() % 1000 / 100.0;
    double m2 = rand() % 1000 / 100.0;
    double a = roundDouble(m2 * g / (m1 + m2), 3);
    double ft = roundDouble(m1 * a, 3);
    cout << "A weight sits on a frictionless table, connected via a rope to another weight hanging over the edge of the table\n";
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "The mass of the weight on the table is " << m1 << "kg\nThe mass of the weight hanging off the table is " << m2 << "kg\nFind the acceleration of the weight on the table\n";
        double ans; cin >> ans;
        checkAnswerD(ans, a);
    }
    else if (whichone == 1) {
        cout << "The mass of the weight on the table is " << m1 << "kg\nThe weight on the table accelerates towards the edge of the table at " << a << " m/s^2\nFind the mass of the hanging weight\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m2);
    }
    else if (whichone == 2) {
        cout << "The mass of the resting weight is " << m1 << "kg\nThe mass of the hanging weight is " << m2 << "kg\nFind the force of tension on the resting weight\n";
        double ans; cin >> ans;
        checkAnswerD(ans, ft);
    }
    else {
        cout << "The mass of the hanging weight is " << m2 << "kg\nThe hanging weight falls at " << a << " m/s^2\nFind the mass of the weight on the table\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m1);
    }
}

void frict_hang_weight_pulley() {
    double m1 = rand() % 1000 / 100.0;
    double m2 = rand() % 1000 / 100.0;
    double ff = roundDouble(m2 * g * (1 - m2 / (m1 + m2)) * (rand() % 1000 / 1000.0), 3);
    double mu = roundDouble(ff / m1 / g, 2);
    double a = roundDouble((m2 * g  - ff) / (m1 + m2), 3);
    double ft = roundDouble(m1 * a + ff, 3);
    cout << "A weight sits on a rough table, connected via a rope to another weight hanging over the edge of the table\n";
    int whichone = rand() % 5;
    if (whichone == 0) {
        cout << "The coefficient of friction between the resting weight and the table is " << mu << "\nThe mass of the resting weight is " << m1 << "kg\nThe mass of the hanging weight is " << m2 << "kg\nFind the acceleration of the resting weight\n";
        double ans; cin >> ans;
        checkAnswerD(ans, a);
    }
    else if (whichone == 1) {
        cout << "The coefficient of friction between the resting weight and the table is " << mu << "\nThe mass of the resting weight is " << m1 << "kg\nThe weight on the table accelerates toward the edge of the table at " << a << " m/s^2\nFind the mass of the hanging weight\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m2);
    }
    else if (whichone == 2) {
        cout << "The coefficient of friction between the resting weight and the table is " << mu << "\nThe hanging weight has mass " << m2 << "kg and falls at " << a << " m/s^2\nFind the mass of the weight on the table\n";
        double ans; cin >> ans;
        checkAnswerD(ans, m1);
    }
    else if (whichone == 3) {
        cout << "The coefficient of friction between the resting weight and the table is " << mu << "\nThe mass of the resting weight is " << m1 << "kg\nThe mass of the hanging weight is " << m2 << "kg\nFind the force of tension on the resting weight\n";
        double ans; cin >> ans;
        checkAnswerD(ans, ft);
    }
    else {
        cout << "The mass of the resting weight is " << m1 << "kg\nThe mass of the hanging weight is " << m2 << "kg\nThe hanging weight falls at " << a << " m/s^2\nFind the coefficient of friction between the resting weight and the table\n";
        double ans; cin >> ans;
        checkAnswerD(ans, mu);
    }
}