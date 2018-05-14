#pragma once

#include <string>
#include <chrono>
#include <ctime>

class TimeStamp {

    public:
        static std::string now(void) {
            std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
            std::string stamp = std::string(std::ctime(&currentTime));
            return stamp.substr(0, stamp.length()-1);
        }

};