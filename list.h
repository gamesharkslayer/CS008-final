//
// Created by charlie on 4/13/23.
//

#ifndef TYPINGGAME_LIST_H
#define TYPINGGAME_LIST_H

#include "Node.h"

class list {
public:
    list();
    void push(char param);
    char top();
    void pop();
private:
    Node* head;

};


#endif //TYPINGGAME_LIST_H
