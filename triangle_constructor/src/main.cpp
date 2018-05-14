#include <iostream>
#include "triangle.h"
#include <string.h>

using namespace std;

int main(void) {

    Triangle triangle(10, 88);

    cout << "Area of triangle = " << std::to_string(triangle.calculate_area()) << endl;

    return 0;
}