#include "linked_list.h"
#include <stdexcept>
#include <iostream>

LinkedList::LinkedList(void) {
    head = nullptr;
}

LinkedList::~LinkedList(void) {
    while (head) {
        remove_at_back();
    }
}

void LinkedList::add_in_front(char value) {
    Node * newNode = new Node(value);
    newNode->set_next(head);
    head = newNode;
}

void LinkedList::add_at_back(char value) {
    Node * newNode = new Node(value);

    if (!head) {
        head = newNode;
    } else {
        Node * last = get_last_node();
            last->set_next(newNode);
    }
}

char LinkedList::remove_from_front(void) {
    if (size() <= 0) {
        throw std::runtime_error("No elements left in list");
    } else {
        Node * node = head;
        head = head->get_next();
        char value = node->get_data();
        delete node;
        return value;
    }
}

char LinkedList::remove_at_back(void) {
    char value;
    if (size() <= 0) {
        throw std::runtime_error("No elements left in list");
    } else {
        Node * node = get_before_last();

        if (node) {
            value = node->get_next()->get_data();
            delete node->get_next();
            node->set_next(nullptr);
        } else {
            value = head->get_data();
            delete head;
            head = nullptr;
        }
        return value;
    }
}

std::string LinkedList::to_string(void) {
    std::string listInfo;

    if (size() <= 0){
        listInfo = "List is empty";
    }
           
    Node * next = head;

    while(next) {
        listInfo += next->get_data();
        next = next->get_next();
    }

    listInfo += " [" + std::to_string(size()) + " elements]";  


    return listInfo;
  }

Node * LinkedList::get_last_node(void) {
    Node * next = head;
    while(next && next->get_next()) {
        next = next->get_next();
    }

    return next;
}

Node * LinkedList::get_before_last(void) {
    Node * beforeLast = head;
    while(beforeLast && beforeLast->get_next() && beforeLast->get_next()->get_next()) {
        beforeLast = beforeLast->get_next();
    }

    if (beforeLast == head) {
        return nullptr;
    }
    return beforeLast;
}

int LinkedList::size(void) {
    int i = 0;
    Node * next = head;
    while(next) {
        next = next->get_next();
        i++;
    }

    return i;
}