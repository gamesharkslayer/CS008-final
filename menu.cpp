//
// Created by charlie on 4/27/23.
//

#include "menu.h"

menu::menu() {
Menubar.setPosition({400,200});
textmenu.setString("Test menu");
textmenu.setPosition({0,390});
}

menu::menu(std::string) {

}

void menu::draw(sf::RenderTarget &window, sf::RenderStates states) const {

}

void menu::eventHandler(sf::RenderWindow &window, sf::Event event) {
    //if(Menubar.getGlobalBounds() == mouse.getPosition())
}

void menu::play() {

}
