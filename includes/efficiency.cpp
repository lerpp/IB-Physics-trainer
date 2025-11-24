#include <iostream>
#include <string>
#include <algorithm>
#include "efficiency.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::swap;

void efficiency() {
    double e_in = rand() % 1000 / 10.0;
    double e_out = rand() % 1000 / 10.0;
    if (e_in < e_out) swap(e_in, e_out);
    double percent = roundDouble(e_out / e_in * 100, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "A lightbulb receives " << e_in << "J of electrical energy and outputs " << e_out << "J of useful radiant energy\nWhat is its percent efficiency\n";
        double ans; cin >> ans;
        checkAnswerD(ans, percent);
    }
    else if (whichone == 1) {
        cout << "A lightbulb with efficiency " << percent << "% takes in " << e_in << "J of electrical energy\nFind the output of useful energy\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e_out);
    }
    else {
        cout << "A lightbulb with efficiency " << percent << "% outputs " << e_out << "J of useful radiant energy\nFind the amount of electrical energy the lightbulb receives\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e_in);
    }
}