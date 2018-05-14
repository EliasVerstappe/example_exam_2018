#pragma once

class Triangle {

    public:
        Triangle(double base, double height);

    public:
        double calculate_area(void);

    private:
        double base;
        double height;
};