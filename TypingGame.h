//
// Created by charlie on 4/13/23.
//

#ifndef TYPINGGAME_TYPINGGAME_H
#define TYPINGGAME_TYPINGGAME_H


#include "GUIComponent.h"
#include "MultiText.h"
#include "TargetText.h"
#include <iomanip>
#include <iostream>
#include "timer.h"
enum class states{
    HIDDEN, VISABLE
};
class TypingGame : public GUIComponent{
public:

    TypingGame();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);

private:
    sf::Clock clock;
    TargetText goaltext;
    MultiText userinput;
    MultiText sfmlpoint;
    int points = 0;
    float timeelapsed;

   // int points = 0;
   //int timeelapsed;
    bool correct = false;
    void calcpoints();
    // background
    sf::Texture backgroundtex1;
    sf::Sprite background1;
    sf::Texture thumbsup;
    sf::Sprite Thumbsupsprite;
};

#endif //TYPINGGAME_TYPINGGAME_H
