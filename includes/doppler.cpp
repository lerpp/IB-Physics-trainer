#include <iostream>
#include <string>
#include <cmath>
#include "doppler.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void doppler_moving_source() {
    double f = rand() % 1000;
    double v = rand() % 1000 / 10.0;
    double u = rand() % 1000 / 100.0 * pow(-1, rand() % 2);
    double f_prime = roundDouble(f * v / (v - u), 3);
    string direction = u > 0 ? "towards" : "away from";
    int whichone = rand() % 4;
    if(whichone == 0){
        cout << "A truck is moving " << direction << " you at " << fabs(u) << " m/s\nThe truck is emitting a sound with frequency " << f << " Hz\nThe sound wave has speed " << v << " m/s\nFind the perceived frequency of the wave\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f_prime);
    }
    else if(whichone == 1){
        cout << "A truck is moving " << direction << " you at " << fabs(u) << " m/s\nThe truck is emitting a sound wave with speed " << v << " m/s which you measure to have frequency " << f_prime << " Hz\nWhat is the frequency of the original wave?\n";
        double ans; cin >> ans;
        checkAnswerD(ans, f);
    }
    else if(whichone == 2){
        cout << "A truck is moving " << direction << " you, playing a sound with frequency " << f << " Hz and speed " << v << " m/s\nYou measure the frequency of the wave as " << f_prime << " Hz\nFind the speed of the truck\n";
        double ans; cin >> ans;
        checkAnswerD(ans, fabs(u));
    }
    else{
        cout << "A truck is moving " << direction << " you at " << fabs(u) << " m/s, playing a sound with frequency " << f << " Hz\nYou measure the frequency of the wave as " << f_prime << " Hz\nHow fast is the wave?\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
}