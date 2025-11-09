#ifndef IB_PHYS_TOOL_ADD_VECTORS_H
#define IB_PHYS_TOOL_ADD_VECTORS_H
#include <string>

using std::string;

struct vec{
    double magnitude = 0.0;
    string ns, ew;
    string direction;
    double angle = 0.0;
};

double degToRad(double degrees);

double radToDeg(double radians);

vec sumVecs(const vec &v1, const vec &v2);

void addVector();

#endif //IB_PHYS_TOOL_ADD_VECTORS_H
