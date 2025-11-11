#include <iostream>
#include <string>
#include "continue.h"

using std::string, std::cin, std::cout, std::ws, std::getline;

void next() {
    cout << " (type a to continue)";
    string cont; getline(cin >> ws, cont);
}