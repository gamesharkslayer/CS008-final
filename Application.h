//
// Created by charlie on 4/9/23.
//

#ifndef TYPINGGAME_APPLICATION_H
#define TYPINGGAME_APPLICATION_H
#include<SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "GUIComponent.h"
class Application {
private:

    sf::RenderWindow window;
    std::vector<GUIComponent*> objects;
    //bool dragging = false;
    void runLoop();
    void eventListener();
    void mouseListener();
public:

    Application();
    Application(sf::VideoMode videoMode, std::string title);
    void run();
    void addDrawable(GUIComponent& object);
};


#endif //TYPINGGAME_APPLICATION_H
