//
// Created by charlie on 4/13/23.
//

#ifndef TYPINGGAME_MULTITEXT_H
#define TYPINGGAME_MULTITEXT_H

#include <SFML/Graphics.hpp>
#include "GUIComponent.h"
#include <string>
#include "list.h"
class MultiText : public GUIComponent {
private:
    sf::Text objtext;
    sf::Font font;
  //  sf::Keyboard input;
   // sf::Event event;
    list word;
public:
    MultiText();
    MultiText(std::string paramtext, int size);
    void update(std::string param);
    char begin();
    void end();
    // void settext();
    // remove maybe
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    void updateLocation(int x,int y);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    sf::Vector2f getposition();
    // new
    std::string getstring();
    void setpostiion(sf::Vector2f postion);
    void settext(std::string paramtext);

};

#endif //TYPINGGAME_MULTITEXT_H
