#include "terminal_logger.h"
#include <iostream>
#include "timestamp.h"

using namespace std;

void TerminalLogger::info(std::string message) {
    cout << TimeStamp::now() << " [INFO]: " << message << endl;
}

void TerminalLogger::warning(std::string message) {
    cout << TimeStamp::now() << " [WARNING]: " << message << endl;
}

void TerminalLogger::serious(std::string message) {
    cout << TimeStamp::now() << " [SERIOUS]: " << message << endl;
}