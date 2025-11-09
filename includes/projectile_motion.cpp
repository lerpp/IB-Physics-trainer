#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include "projectile_motion.h"
#include "input_handling.h"
#include "add_vectors.h"

using std::vector, std::string, std::cin, std::cout, std::ws, std::getline;

const vector<string> directions = {"N", "S", "E", "W"};

void projectile_motion() {
    double gravity = 9.8;
    double initHeight = rand() % 1000 / 100.0;
    vec initThrow = {
        .magnitude = rand() % 1000 / 10.0,
        .ns = "N",
        .ew = "E",
        .angle = rand() % 900 / 10.0
    };
    initThrow.direction = "[E " + doubleToString(initThrow.angle) + " N]";

    vec initX = {
        .magnitude = roundDouble(cos(degToRad(initThrow.angle)) * initThrow.magnitude, 3),
        .ns = "N",
        .ew = "E",
        .angle = 0.0
    };
    initX.direction = "[" + initX.ew + "]";
    vec initY = {
        .magnitude = roundDouble(sin(degToRad(initThrow.angle)) * initThrow.magnitude, 3),
        .ns = "N",
        .ew = "E",
        .angle = 90.0
    };
    initY.direction = "[" + initY.ns + "]";
    vec finalY = {
        .magnitude = roundDouble(sqrt(pow(initY.magnitude, 2) + 2 * gravity * initHeight), 3),
        .ns = "S",
        .ew = "E",
        .angle = 90.0,
    };
    finalY.direction = "[" + finalY.ns + "]";
    vec final = sumVecs(initX, finalY);
    double time = roundDouble((finalY.magnitude + initY.magnitude) / gravity, 3);
    double displacementX = roundDouble(initX.magnitude * time, 3);
    double maxHeightTime = roundDouble(initY.magnitude / gravity, 3);
    double maxHeight = roundDouble(initHeight + initY.magnitude / 2.0 * maxHeightTime, 3);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "A ball is thrown from a platform " << initHeight << "m above ground at " << initThrow.magnitude << " m/s " << initThrow.direction << "\nFind the time it takes for the ball to hit the ground\n";
        double ans; cin >> ans;
        checkAnswerD(ans, time);
    }
    else if (whichone == 1) {
        cout << "A ball is thrown from a platform " << initHeight << "m above ground at " << initThrow.magnitude << " m/s " << initThrow.direction << "\nFind the final velocity of the ball\n";
        string ans; getline(cin >> ws, ans);
        checkAnswerS(ans, doubleToString(final.magnitude) + " " + final.direction);
    }
    else if (whichone == 2) {
        cout << "A ball is thrown from a platform " << initHeight << "m above ground at " << initThrow.magnitude << " m/s " << initThrow.direction << "\nFind the range of the ball\n";
        double ans; cin >> ans;
        checkAnswerD(ans, displacementX);
    }
    else if (whichone == 3) {
        cout << "A ball is thrown from a platform " << initHeight << "m above ground at " << initThrow.magnitude << " m/s " << initThrow.direction << "\nFind the maximum height of the ball\n";
        double ans; cin >> ans;
        checkAnswerD(ans, maxHeight);
    }
    else {
        cout << "A ball is thrown from a platform " << initHeight << "m above ground at " << initThrow.magnitude << " m/s " << initThrow.direction << "\nFind the time it takes the ball to reach its maximum height\n";
        double ans; cin >> ans;
        checkAnswerD(ans, maxHeightTime);
    }
}
