#pragma once

class Triangle {

    public:
        Triangle(int base, int height);
        double calculate_area(void);

    private:
        double base;
        double height;
};