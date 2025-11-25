#include <iostream>
#include <string>
#include <vector>
#include "calorimeter.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

const vector<pair<string, double>> capacities = {
    {"aluminium", 9.2e2},
    {"glass", 8.4e2},
    {"iron", 4.5e2},
    {"copper", 3.8e2},
    {"silver", 2.4e2},
    {"lead", 1.3e2}
};

constexpr double c_water = 4.18e3;
constexpr double c_ice = 2.1e3;
constexpr double l_water = 3.4e5;

void calorimeter() {
    double m_water = rand() % 1000 / 1000.0;
    double m_ice = rand() % 1000 / 1000.0;
    auto [metal, c_metal] = capacities[rand() % capacities.size()];
    double m_metal = rand() % 1000 / 1000.0;
    double t_cal = rand() % 1000 / 20.0;
    double t_ice = rand() % 1000 / -100.0;
    double t_f = roundDouble((t_cal * (m_metal * c_metal + m_water * c_water) + m_ice * (c_ice * t_ice - l_water)) / (m_ice * c_water + m_metal * c_metal + m_water * c_water), 3);
    while (t_f <= 0) {
        m_water += 0.1;
        t_f = roundDouble((t_cal * (m_metal * c_metal + m_water * c_water) + m_ice * (c_ice * t_ice - l_water)) / (m_ice * c_water + m_metal * c_metal + m_water * c_water), 3);
    }
    cout << "A " << metal << " calorimeter with mass " << m_metal << "kg is filled with " << m_water << "kg of water\nThe temperature of the calorimeter is " << t_cal << " C\n" << m_ice << "kg of ice with temperature " << t_ice << " C is dropped into the calorimeter\nThe specific heat capacity of water is " << c_water << " J/(kg * C)\nThe specific heat capacity of ice is " << c_ice << " J/(kg * C)\nThe specific heat capacity of " << metal << " is " << c_metal << " J/(kg * C)\nThe latent heat of fusion of water is " << l_water << "J/kg\nFind the final temperature of the mixture of water inside the calorimeter after it reaches thermal equilibrium\n";
    double ans; cin >> ans;
    checkAnswerD(ans, t_f);
}