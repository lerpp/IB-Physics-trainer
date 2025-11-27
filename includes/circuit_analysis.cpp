#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "circuit_analysis.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, vector<vector<double>>>> circuits = {
    {
R"(      I
     -->        3A
  __________/\/\/\/\/\_____________
  |            R1                 |
  |                               |
 ---   -                          \
-----                             /
 ---   54V                     R2 \  9V
-----  +                          /
  |                               \
  |                               /
  |                               |
  |              7Ω               |
  |_________/\/\/\/\/\____________|
                 R3)",
        {
            {24, 3, 8},
            {9, 3, 3},
            {21, 3, 7},
            {54, 3, 18}
        }
    },
    {
R"(      I
     --->
   ______________________________________
  |                  |                  |
  |                  |                  |
 ---   -             |                  |
-----                \                  \
 ---                 /  9V              /
-----            R1  \  2A           R2 \
 ---                 /                  /
-----  +             |                  |
  |                  |                  |
  |                  |                  |
  |__________________|__________________|
                                 R1 = R2
)",
        {
            {9, 2, 4.5},
            {9, 2, 4.5},
            {9, 4, 2.25}
        }
    },
    {
R"(         I
       --->
  ___________________________________________
  |                                         |
  |                                   ______|_____
  |                                   |          |
 ---   -                              \          \ R2
-----  50V                        25Ω / R1       / 15Ω
 ---                                  \          \
-----  +                              |__________|
  |                                         |
  |                   10Ω                   |
  |________________/\/\/\/\/\_______________|
                       R3
)",
        {
            {24.2, 0.97, 25},
            {24.2, 1.61, 15},
            {25.8, 2.58, 10},
            {50, 2.58, 19.4}
        }
    },
    {
R"(      I
     --->     R1   25Ω
  ___________/\/\/\/\/\___________
  |             3A               |
  |                              |
  |                              |        R3
  |                          ____|____/\/\/\/\/\___
  |                          |           5Ω       |
 ---   -                     \                    \
-----                    R2  /  10Ω          R4   /  15Ω
 ---                         \                    \
-----  +                     /                    /
  |                          |____________________|
  |                              |
  |                              |
  |                              |
  |______________________________|
)",
        {
            {75, 3, 25},
            {20, 2, 10},
            {5, 1, 5},
            {15, 1, 15},
            {95, 3, 31.7}
        }
    },
    {
R"(      I
     --->      R1
  _________/\/\/\/\/\__________________________________
  |            5Ω           |                         |
  |                         |                         |
  |                         |                         |
  |                         |                         |
  |                   ______|_______            ______|_______
  |                   |            |            |            |
 ---   -              \            \            \            \
-----             R2  /        R3  /        R4  /        R5  /
 ---   150V       1Ω  \       15Ω  \       10Ω \        1Ω  \
-----  +              /            /            /            /
  |                   |____________|            |____________|
  |                         |                         |
  |                         |                         |
  |                         |                         |
  |            20Ω          |                         |
  |________/\/\/\/\/\_______|_________________________|
               R6
)",
        {
            {29.5, 5.9, 5},
        {2.7, 2.7, 1},
        {2.7, 0.18, 15},
        {2.7, 0.27, 10},
        {2.7, 2.7, 1},
        {118, 5.9, 20},
        {150, 5.9, 25.5}
        }
    }
};

void circuit_analysis() {
    SetConsoleOutputCP(CP_UTF8);
    auto [circuit, vals] = circuits[rand() % circuits.size()];
    cout << "Solve for the current through, voltage across, and resistance of every resistor and the source in the following circuit\nConfigure your answers in a table with columns being voltage, current, and resistance and rows being resistor 1, resistor 2, etc. and the last row being the source\n";
    cout << circuit << '\n';
    vector anstable(vals.size(), vector<double>(vals[0].size()));
    for (int i = 0; i < vals.size(); i++)
        for (int j = 0; j < vals[0].size(); j++)
            cin >> anstable[i][j];
    if (anstable == vals) cout << "Correct!";
    else {
        cout << "Wrong! Here is the correct table:\n";
        for (const auto &i : vals) {
            for (const auto &j : i) cout << spacePadding(j, 5);
            cout << "\n";
        }
    }
}















