//
// Created by charlie on 4/13/23.
//

#include "TypingGame.h"

TypingGame::TypingGame() {
sfmlpoint.setpostiion({0,150});
std::string stringpoint = std::to_string(points);
sfmlpoint.settext(stringpoint);
goaltext.setpostiion({100,170});
userinput.setpostiion({320,200});
backgroundtex1.loadFromFile("wrong.png");
background1.setTexture(backgroundtex1);
background1.setScale({0.5,0.5});
thumbsup.loadFromFile("check.png");
Thumbsupsprite.setTexture(thumbsup);
Thumbsupsprite.setPosition({250,0});

}

void TypingGame::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(userinput);
    window.draw(goaltext);
    window.draw(sfmlpoint);

    if(correct == true)
        window.draw(Thumbsupsprite);
    else
    {
        window.draw(background1);
    }
}

void TypingGame::eventHandler(sf::RenderWindow &window, sf::Event event) {

    if(event.type == sf::Event::TextEntered)
    {

        std::string s = userinput.getstring();
        if(event.text.unicode == 8 && s.empty() != true)
        {
            s.pop_back();
        }
        else if(event.type == sf::Event::TextEntered)
        {
            s.push_back(event.text.unicode);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
        {
            if(goaltext.getstring() == userinput.getstring())
            {
                correct = true;
                goaltext.pop();
                s = "";
                timeelapsed = clock.getElapsedTime().asSeconds();
                calcpoints();
                std::cout << timeelapsed;
                clock.restart();

            }
            else
            {
                s = "";
                goaltext.pop();
                correct = false;
                timeelapsed = clock.getElapsedTime().asSeconds();
                calcpoints();
                std::cout << timeelapsed;
                clock.restart();

            }
            //timeelapsed = 10000 * static_cast<int>(clock.getElapsedTime().asSeconds());

        }
        userinput.update(s);

    }
}

void TypingGame::calcpoints() {
    if(correct == true)
    {
        //points += 10 * gametimer.gettime();
        points += static_cast<int>(timeelapsed);
        correct == false;
    }
    else
    {
        points -= 10;
    }
    std::string stringpoint = std::to_string(points);
    sfmlpoint.settext(stringpoint);
}

    