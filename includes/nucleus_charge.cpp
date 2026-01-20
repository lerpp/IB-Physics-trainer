#include <iostream>
#include <string>
#include "nucleus_charge.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

constexpr double e = 1.6e-19;

void nucleus_charge() {
    double z = rand() % 200;
    double charge = roundDouble(z * e, 3);
    cout << "What is the charge of the nucleus of an atom with " << z << " protons?\n";
    double ans; cin >> ans;
    checkAnswerD(ans, charge);
}