#pragma once

#include "logger.h"

class TerminalLogger : public Logger {

    public:
        virtual void info(std::string message);
        virtual void warning(std::string message);
        virtual void serious(std::string message);

};