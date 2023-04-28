//
// Created by charlie on 4/18/23.
//

#ifndef TYPINGGAME_TIMER_H
#define TYPINGGAME_TIMER_H
#include <chrono>
#include <SFML/System/Clock.hpp>

class timer {
public:
    timer();
    double gettime();
    void start();
    void end();
private:
   sf::Clock clock;
};


#endif //TYPINGGAME_TIMER_H
