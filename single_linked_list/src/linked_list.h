#pragma once

#include "node.h"
#include <string>

class LinkedList {

    public:
        LinkedList(void);
        ~LinkedList(void);

    public:
        void add_in_front(char value);
        void add_at_back(char value);

        char remove_from_front(void);
        char remove_at_back(void);

        int size(void);

    public:
        std::string to_string(void);

    private:
        Node * get_last_node(void);
        Node * get_before_last(void);

    private:
        Node * head;
};