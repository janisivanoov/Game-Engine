#include "stdafx.h"
#include "Header2.h"
void Engine::input(){
    if (Keyboard::isKeyPressed(Keyboard::Escape)){ // Handling Escape Press
        m_Window.close();
    }
    if (Keyboard::isKeyPressed(Keyboard::A)){ // Handling motion keystrokes
        m_Bob.moveLeft();
    } else {
        m_Bob.stopLeft();
    }
    if (Keyboard::isKeyPressed(Keyboard::D)){
        m_Bob.moveRight();
    } else {
        m_Bob.stopRight();
    }
}