#pragma once

#include <vector>
#include <string>

class NumberList {

    public:
        void add(int value);
        void reverse(void);
        std::vector<int> get_vector(void);
        std::string to_string(void);

    private:
        std::vector<int> numbers;

};