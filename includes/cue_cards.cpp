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
    {"What is resistivity?", "Resistivity is a measure of how much a substance resists electric current, and is proportional to resistance"},
    {"What is Kirchhoff's current law?", "Across a series circuit, current is constant\nAcross a parallel circuit, current in equals current out at a junction"},
    {"What is Kirchhoff's voltage law?", "Across a series circuit, the sum of the voltage changes is 0\nAcross a parllel circuit, every load has the same voltage\n"},
    {"What is the difference between equivalent resistance in a series and parllel circuit?", "In a series circuit, equivalent resistance is equal to the sum of individual resistances\nIn a parllel circuit, the reciprocal of the equivalent resistance is equal to the sum of the reciprocals of the individual resistances"},
    {"What is a magnetic field?", "A magnetic field is a 3D space surrounding a magnetic which exerts a force on magnetic objects"},
    {"In which direction do field lines of a magnetic field point?", "Field lines point from the north pole to the south pole outside of the magnet (in the same direction as a test compass would point), and from the south pole to the north pole inside the magnet\nThey are closer together where the magnetic field is stronger"},
    {"What are the 3 right hand rules and the 3 left hand rules of magnetism?", "Right Hand Rule 1:\nUsed for straight conductors (grab the conductor)\nThumb points in direction of conventional current flow\nCurled fingers point in direction of magnetic field\nRight Hand Rule 2:\nUsed for solenoids (coiled conductors) (grab the coil)\nCurled fingers point in direction of conventional current flow\nThumb points in direction of magnetic field (north pole)\nRight Hand Rule 3:\nUsed for interactions between straight conductor and magnetic field (open your hand)\nFingers point in direction of magnetic field\nThumb points in direction of conventional current flow\nPalm points in direction of induced force\nLeft hand rules are all the same as the right hand rules, except they are for electron current flow (opposite direction as conventional current flow)"},
    {"What are the symbols describing current flow in a cross-section of a wire?", "An x means the current flows into the page, while a dot means the current flows out of the page"},
    {"In a temporary magnet, how do you increase the strength of the magnetic field?", "Increase the current flowing through the conductor\nIncrease the number of loops in a solenoid\nAdd a soft iron core to the conductor"},
    {"What is the law of electromagnetic induction? (generator effect)", "The law of electromagnetic induction states that a current is induced in a conductor as a consequence of a changing magnetic field"},
    {"What is Lenz's law?", "Lenz's law states that the current generated from a change in the magnetic field opposes that change\nFor example, pushing the north pole of a bar magnet into a coiled conductor causes a current to flow in that conductor such that a north pole is formed, repelling hte magnet\nSimilarly, pulling the north pole out of the coil causes the current to flow in the conductor such that a south pole is generated, attracting the magnet back in"},
    {"What is a mechanical wave?", "A mechanical wave is a wave which travels through a medium (e.g. air or water)"},
    {"What is meant by a particle's net motion?", "Net motion is essentially the displacement of a particle across a certain time interval"},
    {"What is the elasticity of a medium?", "Elasticity is a property defining how readily an object or medium returns to its original state after a disturbance"},
    {"What is the difference between a transverse wave and a longitudinal wave?", "In a transverse wave, particles vibrate perpendicular to the direction of energy transfer. An example is a vibrating guitar string\nIn a longitudinal wave, particles vibrate parallel to the direction of energy transfer. An example is sound waves"},
    {"What is translational molecular motion?", "Translational molecular motion refers to the straight-line motion of molecules, which occurs in substances such as gases, where the particles move freely"},
    {"What are compression and rarefaction? How can they be related to ambient pressure?", "Compression occurs when particles of a medium are more compressed than equilibrium, while rarefaction occurs when the particles are less compressed\nAmbient pressure is the equilibrium pressure of a gaseous medium (when there are no waves)\nIn terms of ambient pressure, compression occurs when the pressure of the particles exceeds ambient pressure, and rarefaction occurs when the pressure of the particles drops below ambient pressure"},
    {"Define the following terms: amplitude, waveform, crest, trough, wavelength, phase shift", "Amplitude: the maximum net-motion of a particle from equilibrium motion (distance from equilibrium to crest/trough)\nWaveform: the shape of a wave when graphed\nCrest: the highest point of a wave\nTrough: the lowest point of a wave\nWavelength: the distance from one crest to the next/one trough to the next\nPhase shift: how much one wave is shifted along the x-axis relative to another, identical wave"},
    {"What does it mean for two waves to be in phase or out of phase?", "Two waves are in phase if their phase shifts are identical (their peaks & troughs line up)\nOtherwise, they are out of phase"},
    {"What do the frequency, period, and speed of a wave refer to?", "The frequency of a wave is defined as the number of oscillation of a wave which occur per second, measured in Hertz (Hz)\nThe period of a wave is the amount of time required to complete one oscillation, measured in seconds (s)\nThe speed of a wave refers to the speed at which the wave travels through the medium or the speed at which the energy of the wave travels through the medium. It is calculated by wavelength/period"},
    {"What is simple harmonic motion? What is a property of simple harmonic motion? (Hint: think amplitude, period, & frequency)", "Simple harmonic motion refers to motion which occurs periodically around an equilibrium point\nThe amplitude, period, and frequency of the motion are constant across oscillations"}
};

void pickCueCard() {
    cout << "Cue Card\n";
    int card = rand() % cueCards.size();
    cout << cueCards[card].first << "\n";
    next();
    cout << cueCards[card].second << "\n";
}
