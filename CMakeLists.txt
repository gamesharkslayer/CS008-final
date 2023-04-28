    cmake_minimum_required(VERSION 3.25)
project(typinggame)

set(CMAKE_CXX_STANDARD 17)

add_executable(typinggame main.cpp Application.cpp Application.h MultiText.cpp MultiText.h GUIComponent.cpp GUIComponent.h list.cpp list.h Node.h Letter.cpp Letter.h TypingGame.cpp TypingGame.h TargetText.cpp TargetText.h timer.cpp timer.h points.cpp points.h File.cpp File.h menu.cpp menu.h)
    target_link_libraries(typinggame sfml-graphics sfml-audio)
    find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)