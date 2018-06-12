#include "number_list.h"
#include <string>
#include "math_helper.h"

void NumberList::add(int value) {
    numbers.push_back(value);
}

void NumberList::reverse(void) {
    MathHelper helper;
    for (unsigned int i = 0; i < numbers.size()/2; i++) {
        helper.swap(&numbers.at(i), &numbers.at(numbers.size()-1-i));
    }
}

std::vector<int> NumberList::get_vector(void) {
    return numbers;
}

std::string NumberList::to_string(void) {
    if (numbers.size() == 0) {
        return "[]";
    }

    std::string output = "[";
    for (unsigned int i = 0; i < numbers.size(); i++) {
        output += std::to_string(numbers.at(i));
        if (i < numbers.size()-1) {
            output += ", ";
        }
    }
    output += "]";

    return output;
}