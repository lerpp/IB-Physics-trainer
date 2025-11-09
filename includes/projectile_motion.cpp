#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include "projectile_motion.h"
#include "input_handling.h"
#include "add_vectors.h"

using std::vector, std::string, std::cin, std::cout;

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
    double maxHeight = roundDouble(initHeight + (pow(finalY.magnitude, 2) - pow(initY.magnitude, 2) / 2 / gravity), 3);
    double maxHeightTime = roundDouble(initY.magnitude / gravity, 3);
    int whichone = rand() % 2;
    if (whichone == 0) {
        cout << "A ball is thrown from a platform " << initHeight << "m above ground at " << initThrow.magnitude << " m/s " << initThrow.direction << "\nFind the time it takes for the ball to hit the ground\n";
        double ans; cin >> ans;
        checkAnswerD(ans, time);
    }
    if (whichone == 1) {
        cout << "A ball is thrown from a platform " << initHeight << "m above ground at " << initThrow.magnitude << " m/s " << initThrow.direction << "\nFind the final velocity of the ball\n";
        string ans; getline(cin, ans);
        checkAnswerS(ans, doubleToString(final.magnitude) + " " + final.direction);
    }
}
