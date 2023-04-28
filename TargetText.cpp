//
// Created by charlie on 4/16/23.
//

#include "TargetText.h"

TargetText::TargetText() {

    myfile.open("text.txt");
    std::string line;
    //while(myfile >> line)
    while(std::getline(myfile,line))
    {
        stack.push_back(line);
    }

/*
    stack.push_back("test1");
    stack.push_back("test2");
    stack.push_back("test3");
     */
    myfile.close();
    this->setpostiion({0,20});

    update(stack.back());
}

void TargetText::pop() {
    stack.pop_back();
    update(stack.back());
}



std::string TargetText::top() {
    return this->getstring();
}
