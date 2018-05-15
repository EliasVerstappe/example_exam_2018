#include <iostream>
#include "linked_list.h"

using namespace std;

int main(void) {

    LinkedList list;
    // list.remove_from_front();        // Should throw exception

    cout << "Starting with: " << list.to_string() << endl;

    list.add_in_front('O');
    list.add_in_front('L');
    list.add_in_front('L');
    list.add_in_front('E');
    list.add_in_front('H');

    cout << "Adding some data: " << list.to_string() << endl;

    list.add_at_back(' ');
    list.add_at_back('W');
    list.add_at_back('O');
    list.add_at_back('R');
    list.add_at_back('L');
    list.add_at_back('D');
    cout << "Adding more data: " << list.to_string() << endl;

    char start = list.remove_from_front();
    cout << "Removed " << start << " from the front: " << list.to_string() << endl;

    char end = list.remove_at_back();
    cout << "Removed " << end << " from the back: " << list.to_string() << endl;
    
    cout << endl << endl << "Second list" << endl;

    // SECOND LIST

    LinkedList secondList;
    //secondList.remove_at_back();        // Should throw exception

    secondList.add_at_back('X');
    cout << "Adding some data: " << secondList.to_string() << endl;
    
    char last = secondList.remove_at_back();

    cout << "Removed " << last << " from the back: " << secondList.to_string() << endl;

    secondList.add_in_front('O');
    cout << "Adding some data: " << secondList.to_string() << endl;

    char first = secondList.remove_from_front();

    cout << "Removed " << first << " from the front: " << secondList.to_string() << endl;

    return 0;
}