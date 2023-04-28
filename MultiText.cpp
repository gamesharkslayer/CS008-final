//
// Created by charlie on 4/13/23.
//

#include "MultiText.h"
MultiText::MultiText() {
    objtext.setFont(font);
    font.loadFromFile("arial.ttf");

    objtext.setCharacterSize(24);
}

MultiText::MultiText(std::string paramtext, int size) {
    objtext.setFont(font);
    font.loadFromFile("arial.ttf");
    objtext.setString(paramtext);
    objtext.setCharacterSize(size);
}

void MultiText::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(objtext);
}
/*
void MultiText::updatetext(std::string parameter)
{
    objtext.setString(parameter);
}
*/

char MultiText::begin()
{
    return word.top();
}

void MultiText::end()
{
    return word.pop();
}
void MultiText::eventHandler(sf::RenderWindow& window, sf::Event event) {
    /*
    if(event.type == sf::Event::KeyPressed)
    {
        if(event.key.code == sf::Keyboard::Escape)
            objtext.
    }
    */
    if(event.type == sf::Event::TextEntered)
    {
        std::string s = objtext.getString();
        if(event.text.unicode == 8)
        {
            //word.pop();
            s.pop_back();
        }
        else if(event.type == sf::Event::TextEntered)
        {
            s.push_back(event.text.unicode);
//        word.push(event.text.unicode);
//        std::string newenter = objtext.getString() + word.top();
//        word.pop();
//        objtext.setString(newenter);
        }
        objtext.setString(s);
    }

}
void MultiText::update(std::string param)
{
    objtext.setString(param);
}

void MultiText::setpostiion(sf::Vector2f postion) {
    objtext.setPosition(postion);
}

sf::Vector2f MultiText::getposition() {
    return objtext.getPosition();
}

std::string MultiText::getstring() {
    return objtext.getString();
}

void MultiText::settext(std::string paramtext) {
    objtext.setString(paramtext);
}
