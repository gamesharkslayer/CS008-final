//
// Created by charlie on 4/13/23.
//

#include "Letter.h"
Letter::Letter()
{
    letter = 'A';
}
Letter::Letter(char param) {
    letter = param;
}

char Letter::getletter() {
    return letter;
}

void Letter::setletter(char param) {
    letter = param;
}