#include <iostream>
#include <vector>
#include <string>
#include "cue_cards.h"
#include "continue.h"

using std::vector, std::cin, std::cout, std::pair, std::string;

const vector<pair<string, string>> cueCards = {
    {"What is the difference between a vector and a scalar?", "A scalar has magnitude only, no direction. Examples of scalars are speed and height\nVectors have magnitude and distance. Examples of vectors include displacement and velocity"},
    {"What is the difference between distance and displacement?", "Distance is the total distance travelled while displacement is your position relative to your starting position\nIf I walk 10 meters forwards and 10 meters backward, my distance travelled is 20m while my displacement is 0m"},
    {"What is free fall?", "Free fall is when an object experiences no forces acting on it except for gravity"},
    {"What is terminal velocity?", "Terminal velocity is the speed an object travels at where the force of air resistance is equal to the force of gravity.\nOnce an object reaches terminal velocity, it will not accelerate or decelerate unless its cross-sectional surface area changes"},
    {"What is a projectile?", "A projectile is an object given an initial thrust and then allowed to soar through the air under the influence of gravity alone"},
    {"What is the definition for the range of a projectile?", "The horizontal displacement of the projectile"},
    {"What is translational equilibrium?", "An object is in translational equilibrium if the net force acting on it is 0"},
    {"What is inertia?", "Inertia is the property of an object that allows it to resist changes in motion. Inertia scales proportionately with mass"},
    {"What is the derived SI unit for Newtons?", "A Newton is the force required to accelerate a 1kg mass at 1 m/s^2\nIts derived SI unit is kg * m / s^2"},
    {"Why can the force of static friction change, while the force of kinetic friction does not?", "The force of static friction is always equal in magnitude and opposite in direction to the applied force\nThe coefficienct of kinetic friction is constant and so the force of kinetic friction is constan also"},
    {"What is Newton's first law of motion?", "An object will not change in motion unless acted upon by a force"},
    {"What is Newton's second law of motion?", "An unbalanced force on an object will cause it to accelerate uniformly in the direction of the force"},
    {"What is Newton's third law of motion?", "For every action force, there is an equal reaction force in the opposite direction"},
    {"What is the unit for the coefficient of friction?", "Trick question! There is no unit (hinted at by the description: coefficient)"},
    {"What is the derived unit for the spring constant?", "The spring constant describes how much force it takes to displace a spring by one meter\nIts SI derived unit is N/m"},
    {"What is the definition of work?" , "Work is the transfer of energy"},
    {"What is the definition of energy?", "Energy is the ability to do work"},
    {"What is the derived SI unit for the joule? (when used for work)", "A Joule is the amount of work done by a 1N force for 1m\nTherefore its SI unit is Nm"},
    {"How is it possible for negative work to be done?", "Work is proportional to force and displacement\nWhen the object is displaced in the opposite direction as the force, negative work is done (e.g. friction)"},
    {"What is kinetic energy?", "Kinetic energy is energy possessed by an object due to its speed"},
    {"What is potential energy?", "Potential energy is energy possessed by an object in relation to its position relative to forces in its environment"},
    {"What is gravitational potential energy?", "Gravitational potential energy (GPE) is energy possessed by an object due to its position relative to the surface of the Earth"},
    {"What is power?", "Power is the measure of how quickly something does work or converts energy into another form of energy"},
    {"What is the SI unit for power?", "Power is measured in J/s"},
    {"What is the definition of power efficiency?", "Efficiency is the percent of energy put into a system which is outputted as useful energy"},
    {"What is the difference between temperature, thermal energy, and heat?", "Temperature is the average kinetic energy of the particles in a substance\nThermal energy is the total chemical & potential energy in a substance\nHeat is the amount of thermal energy being transferred from a hot object to a cooler one"},
    {"What is specific heat capacity?", "Specific heat capacity is the amount of heat required to heat 1kg of a substance by 1 degree Celsius\nIts unit is J/(kg * C)"},
    {"What is specific latent heat?", "Specific latent heat is the amount of heat required for 1kg of a substance to change states\nSpecific latent heat of fusion is to change states from liquid to solid or vice versa\nSpecific latent heat of vaporization is to change states from liquid to gas or vice versa"},
    {"What is thermal equilibrium?", "Thermal equilibrium occurs when there is no thermal flow between two objects"},
    {"What is a calorimeter?", "A calorimeter measures change in thermal energy/entropy by surrounding a reaction/object with a medium, like water\nSince the mass/volume of the water is known, calculating the change in thermal energy is easy"},
    {"What is an electroscope?", "An electroscope is a device used to measure the change of an object\nIt has a knob on the top and two metal leaves within a chamber"},
    {"What is static electricity?", "Static electricity arises from an imbalance of charge along the surface of an object"},
    {"What is current electricity?", "Current electricity occurs when electrons flow freely and transfer their energy"},
    {"What is electrical current? What is its unit?", "Current is defined as the number of charges (electrons) moving through a point per second\nIt is measured in Amperes (A), which is equal to coulombs per second (C/s)"},
    {"What is charge? What is its unit?", "Charge is a measure of how many electrons there are\nIt is measured in coulombs (C)\nOne coulomb is equal to 6.2e18 electrons"},
    {"What is an ammeter?", "An ammeter is a device used to measure current\nIt is connected in series within an active circuit"},
    {"What is a voltmeter?", "A voltmeter is a device used to measure voltage across two points\nIt is connected in parallel, attached to two different points"},
    {"What is an ohmmeter?", "An ohmmeter is a device used to measure electrical resistance\nIt is connected in parallel in an inactive circuit"},
    {"What is the difference between direct and alternating current?", "In direct current, electrons only move in one direction\nIn alternating current, electrons oscillate between two opposite directions"},
    {"What is the difference between conventional and electron current flow?", "Conventional current flow travels from the positive terminal to the negative terminal of a power source\nElectron current flow travels from the negative terminal to the positive terminal"},
    {"What is voltage?", "Voltage is the difference in potential across a part of a circuit\nWhen work is done by the current, the voltage drops"},
    {"What is electrical resistance?", "Electrical resistance is the amount of opposition received by the flor of the current of electricity\nResistance creates drops in voltage and produces heat as a result of collisions between the flowing electrons and the particles within the resistor"},
    {"What is resistivity?", "Resistivity is a measure of how much a substance resists electric current, and is proportional to resistance"}
};

void pickCueCard() {
    cout << "Cue Card\n";
    int card = rand() % cueCards.size();
    cout << cueCards[card].first << "\n";
    next();
    cout << cueCards[card].second << "\n";
}
