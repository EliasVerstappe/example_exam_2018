#include "math_helper.h"

void MathHelper::swap(int * left, int * right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}