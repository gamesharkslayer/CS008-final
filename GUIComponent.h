//
// Created by charlie on 4/13/23.
//

#ifndef TYPINGGAME_GUICOMPONENT_H
#define TYPINGGAME_GUICOMPONENT_H

#include <SFML/Graphics.hpp>
class GUIComponent : public sf::Drawable//, snapshot
{
public:
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();
};

#endif //TYPINGGAME_GUICOMPONENT_H
