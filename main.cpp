#include <iostream>
#include "Application.h"
#include "MultiText.h"
#include "TypingGame.h"
int main() {
    Application test;

    TypingGame game;
    //test.addDrawable(game);
    //MultiText text;
    test.addDrawable(game);
    test.run();
    return 0;
}
