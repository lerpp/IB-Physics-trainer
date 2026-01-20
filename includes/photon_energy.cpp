#include <iostream>
#include <string>
#include "photon_energy.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

constexpr double hc_j = 1.99e-25;
constexpr double hc_ev = 1.24e-6;

void photon_energy() {
    double wavelength = roundDouble(1 / (rand() % 1000 * 1e14), 3);
    double e_j = roundDouble(hc_j / wavelength, 3);
    double e_ev = roundDouble(hc_ev / wavelength / 1e6, 3);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "The wavelength of a photon is " << wavelength << " m\nFind its energy in Joules\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e_j);
    }
    else if (whichone == 1) {
        cout << "The energy of a photon is " << e_j << " J\nFind its wavelength in m\n";
        double ans; cin >> ans;
        checkAnswerD(ans, wavelength);
    }
    else if (whichone == 2) {
        cout << "The wavelength of a photon is " << wavelength << " m\nFind its energy in MeV\n";
        double ans; cin >> ans;
        checkAnswerD(ans, e_ev);
    }
    else {
        cout << "The energy of a photon is " << e_ev << " MeV\nFind its wavelength in m\n";
        double ans; cin >> ans;
        checkAnswerD(ans, wavelength);
    }
}