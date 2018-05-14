#pragma once

#include <string>

class Logger {

    public:
        virtual void info(std::string message) = 0;
        virtual void warning(std::string message) = 0;
        virtual void serious(std::string message) = 0;
};