#pragma once

#include "logger.h"

class Alarm {

    public:
        Alarm(Logger * logger);

    public:
        void set_code(int code);
        void arm(int code);
        void disarm(int code);
        void trigger(void);

    private:
        void reset(void);
        void change_arm_state(bool arm, int code);

    private:
        static const int DEFAULT_CODE = 1234;
        static const int MAX_RETRIES = 3;
        int code;
        Logger * logger;
        bool armed;
        bool triggered;
        int retries;
};