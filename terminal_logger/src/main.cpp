#include <iostream>
#include "terminal_logger.h"
#include "alarm.h"

using namespace std;

#define CODE 666

int main(void) {

    Logger * logger = new TerminalLogger();
    Alarm alarm(logger);

    alarm.set_code(CODE);
    alarm.arm(CODE);

    alarm.disarm(1234);
    alarm.disarm(8888);
    alarm.disarm(CODE);

    alarm.arm(CODE);
    alarm.disarm(1234);
    alarm.disarm(8888);
    alarm.disarm(6666);

    delete logger;
    return 0;
}