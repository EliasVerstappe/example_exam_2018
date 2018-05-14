#include "alarm.h"

Alarm::Alarm(Logger * logger) {
    this->logger = logger;
    set_code(DEFAULT_CODE);
    reset();
}

void Alarm::reset(void) {
    logger->info("Clearing alarm state");
    armed = false;
    triggered = false;
    retries = 0;
}

void Alarm::set_code(int code) {
    logger->info("Setting alarm code");
    this->code = code;
}

void Alarm::arm(int code) {
    change_arm_state(true, code);
}

void Alarm::disarm(int code) {
    change_arm_state(false, code);
}

void Alarm::change_arm_state(bool arm, int code) {
    std::string state = (arm ? "arm" : "disarm");

    logger->info("Trying to " + state + " the alarm");
    if (retries >= MAX_RETRIES) {
        logger->warning("Too many retries before. Cannot " + state + " alarm");
        return;
    }

    if (this->code == code) {
        reset();
        armed = arm;
        logger->info("Alarm " + state + "ed");
    } else {
        logger->warning("Wrong code provided");
        retries++;
    }

    if (retries >= MAX_RETRIES) {
        trigger();
    }
}

void Alarm::trigger(void) {
    logger->serious("Alarm triggered");
    triggered = true;
}