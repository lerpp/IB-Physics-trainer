#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "input_handling.h"

using std::stringstream, std::scientific, std::setprecision, std::cout, std::ostringstream, std::to_string;

double roundDouble( double x, int n ) {
    stringstream ss;
    ss << scientific << setprecision( n - 1 ) << x;
    return stod( ss.str() );
}

void checkAnswerD(const double &input, const double &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

void checkAnswerI(const int &input, const int &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

void checkAnswerS(const string &input, const string &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

string doubleToString(double value) {
    ostringstream oss;
    oss << value;
    return oss.str();
}

string spacePadding(const double d, int len) {
    string s = doubleToString(d);
    while (s.length() < len) s = " " + s;
    return s;
}
