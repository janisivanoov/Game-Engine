#include "stdafx.h"
#include "Header2.h"
void Engine::draw(){
    m_Window.clear(Color::White); // Erase the previous frame
    m_Window.draw(m_BackgroundSprite); // Rendering the background
    m_Window.draw(m_Bob.getSprite());
    m_Window.display(); // Show everything that you have drawn
}