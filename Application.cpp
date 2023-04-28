//
// Created by charlie on 4/9/23.
//

#include "Application.h"

void Application::runLoop() {
    while(window.isOpen())
    {
        eventListener();
        for(GUIComponent* o : objects)
        {
            o->update();
        }
        window.clear();
        for(GUIComponent* o : objects)
        {
            window.draw(*o);
        }

        window.display();
    }
}

void Application::eventListener() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (sf::Event::Closed == event.type)
            window.close();

        for(GUIComponent* o: objects)
        {
            o->eventHandler(window,event);
        }


    }
}
void Application::run() {
    runLoop();
    /*
     * Button psuedocode
     Button b;
     while(window.isOpen())
     {
     sf::Event event;
     while(window.pollEvent(event))
     {
     if(sf::Event::Closed == event.type)
     { window.close() }
     b.eventhandler(window,event);
     }
     window.clear()
     window.draw(b)
     window.display
     }
     */
}

void Application::addDrawable(GUIComponent &object) {
    objects.push_back(&object);
}

Application::Application() : Application({720,420, 32}, "Application")
{

}

Application::Application(sf::VideoMode videoMode, std::string title)
        : window(videoMode, title) {

}
