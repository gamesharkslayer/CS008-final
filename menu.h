//
// Created by charlie on 4/27/23.
//

#ifndef TYPINGGAME_MENU_H
#define TYPINGGAME_MENU_H

#include <SFML/Graphics.hpp>
#include "TypingGame.h"
class menu {
public:
    menu();
    menu(std::string);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    void play();
private:
sf::RectangleShape Menubar;
sf::Text textmenu;
sf::Event Events;
sf::Mouse mouse;
};


#endif //TYPINGGAME_MENU_H
