//
// Created by charlie on 4/13/23.
//

#include "list.h"

list::list()
{
    head = nullptr;
}
void list::push(char param)
{
    if(head == nullptr)
    {
        head = new Node;

    }
    Node* current = head;
    current->data.setletter(param);
    while(current->next != nullptr)
    {
        current = current->next;
    }
    current->next = new Node;
}

void list::pop()
{
    if(head == nullptr)
    {
        return;
    }
    Node* deleted = head;
    head = head->next;
    delete deleted;

}

char list::top() {
    return head->data.getletter();
}