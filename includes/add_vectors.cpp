#include <iostream>
#include <cmath>
#include <vector>
#include "input_handling.h"
#include "add_vectors.h"

using namespace std;

double degToRad(double degrees) {
    return degrees * M_PI / 180.0;
}

double radToDeg(double radians) {
    return radians * 180.0 / M_PI;
}

const vector<string> directions = {"N", "S", "E", "W"};

vec sumVecs(const vec &v1, const vec &v2) {
    cout << v1.direction << endl;
    vec ans;
    double v1rad = degToRad(v1.angle), v2rad = degToRad(v2.angle);
    double v1x = v1.magnitude * cos(v1rad) * (-1 + 2 * (v1.ew == "E"));
    double v1y = v1.magnitude * sin(v1rad) * (-1 + 2 * (v1.ns == "N"));
    double v2x = v2.magnitude * cos(v2rad) * (-1 + 2 * (v2.ew == "E"));
    double v2y = v2.magnitude * sin(v2rad) * (-1 + 2 * (v2.ns == "N"));
    double ansx = v1x + v2x, ansy = v1y + v2y;

    ans.ns = ansy < 0 ? "S" : "N", ans.ew = ansx < 0 ? "W" : "E";
    ans.magnitude = roundDouble(sqrt(ansx * ansx + ansy * ansy), 3);
    ans.angle = roundDouble(radToDeg(abs(atan(ansy / ansx))), 3);

    if (ans.angle == 0.0) ans.direction = "[" + ans.ew + "]";
    else if (ans.angle == 90.0) ans.direction = "[" + ans.ns + "]";
    else ans.direction = "[" + ans.ew + " " + doubleToString(ans.angle) + " " + ans.ns + "]";

    return ans;
}

void addVector() {
    vec v1, v2;
    v1.magnitude = roundDouble(rand() % 10000 / 100.0 + 1.0, 3), v2.magnitude = roundDouble(rand() % 10000 / 100.0 + 1.0, 3);
    v1.ns = directions[rand() % 2], v2.ns = directions[rand() % 2];
    v1.ew = directions[rand() % 2 + 2], v2.ew = directions[rand() % 2 + 2];
    v1.angle = roundDouble(rand() % 901 / 10.0, 3), v2.angle = roundDouble(rand() % 901 / 10.0, 3);

    if (v1.angle == 0.0) v1.direction = "[" + v1.ew + "]";
    else if (v1.angle == 90.0) v1.direction = "[" + v1.ns + "]";
    else v1.direction = "[" + v1.ew + " " + doubleToString(v1.angle) + " " + v1.ns + "]";

    if (v2.angle == 0.0) v2.direction = "[" + v2.ew + "]";
    else if (v2.angle == 90.0) v2.direction = "[" + v2.ns + "]";
    else v2.direction = "[" + v2.ew + " " + doubleToString(v2.angle) + " " + v2.ns + "]";

    cout << "A person walks " << v1.magnitude << " " << v1.direction << " m and then " << v2.magnitude << " " << v2.direction << " m\nFind the person's displacement\n";
    vec vecAns = sumVecs(v1, v2);
    string ans; getline(cin, ans);
    checkAnswerS(ans, doubleToString(vecAns.magnitude) + " " + vecAns.direction);
}
