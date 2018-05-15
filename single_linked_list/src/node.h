#pragma once

class Node {

    public:
        Node(char data);

    public:
        char get_data(void);
        void set_data(char data);

        Node * get_next(void);
        void set_next(Node * next);

    private:
        char data;
        Node * next;
};