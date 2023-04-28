//
// Created by charlie on 4/16/23.
//

#ifndef TYPINGGAME_TARGETTEXT_H
#define TYPINGGAME_TARGETTEXT_H
#include "MultiText.h"
#include <vector>
#include <fstream>
class TargetText :public MultiText{
public:
    TargetText();
    std::string top();
    void pop();
    bool empty();
private:
    std::ifstream myfile;
    std::vector<std::string> stack;
};


#endif //TYPINGGAME_TARGETTEXT_H
