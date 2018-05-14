#include <iostream>
#include "number_list.h"

using namespace std;

int main(void) {

    NumberList list;

    cout << "Starting with: " << list.to_string() << endl;

    list.add(152);
    list.add(52);
    list.add(88);

    cout << "Added some numbers: " << list.to_string() << endl;

    list.reverse();

    cout << "Reversed: " << list.to_string() << endl;

    return 0;
}