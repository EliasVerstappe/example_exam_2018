#include "node.h"

Node::Node(char data) {
    set_data(data);
    next = nullptr;
}

char Node::get_data(void) {
    return data;
}

void Node::set_data(char data) {
    this->data = data;
}

Node * Node::get_next(void) {
    return next;
}

void Node::set_next(Node * next) {
    this->next = next;
}