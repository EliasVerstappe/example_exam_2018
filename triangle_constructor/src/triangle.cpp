#include "triangle.h"
#include <cstdlib>

Triangle::Triangle(int base, int height){
    this->base = base;
    this->height = height;
}


double Triangle::calculate_area(void) {
    return (base * height) / 2;
}