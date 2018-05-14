#include "triangle.h"
#include <cstdlib>

Triangle::Triangle(double base, double height) {
    this->base = base;
    this->height = height;
}

double Triangle::calculate_area(void) {
    return (base * height) / 2;
}