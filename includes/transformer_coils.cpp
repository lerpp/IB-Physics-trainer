#include <iostream>
#include <string>
#include "transformer_coils.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void solve_transformer_coils() {
    double n1 = rand() % 100 * 10;
    double n2 = rand() % 100 * 10;
    double v1 = rand() % 1000 / 100.0;
    double v2 = roundDouble(v1 * n2 / n1, 3);
    double p = rand() % 1000;
    double i1 = roundDouble(p / v1, 3);
    double i2 = roundDouble(p / v2, 3);
    string step = v2 > v1 ? "step-up" : "step-down";
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "In a transformer, the primary coil has " << n1 << " loops, " << v1 << " V, and " << i1 << " A of current running through it\nThe secondary coil has " << v2 << " V\nFind the power of the transformer\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 1) {
        cout << "In a transformer, the primary coil has " << n1 << " loops, " << v1 << " V, and " << i1 << " A of current running through it\nThe secondary coil has " << i2 << " A running through it\nFind the power of the transformer\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else if (whichone == 2) {
        cout << "In a transformer, the primary coil has " << n1 << " loops and " << v1 << " V\nThe secondary coil has " << n2 << " loops and " << i2 << " A of current running through it\nFind the power of the transformer\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else {
        cout << "In a transformer, the primary coil has " << i1 << " A of current running through it and " << n1 << " loops\nThe secondary coil has a voltage of " << v2 << " V\nThe transformer has power " << p << " W\nFind the number of loops in the secondary coil\n";
        double ans; cin >> ans;
        checkAnswerD(ans, n2);
    }
    cout << "Is the transformer a step-up or step-down transformer?\n";
    string ans; cin >> ans;
    checkAnswerS(ans, step);
}