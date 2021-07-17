#pragma once
#include <SFML/Graphics.hpp>
#include "Header1.h";
using namespace sf;
class Engine
{
private:
    RenderWindow m_Window;
    Sprite m_BackgroundSprite; // Declaring the sprite and texture for the background
    Texture m_BackgroundTexture;
    Bob m_Bob; // Bob's Instance
    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    Engine(); // Game Engine Constructor
    void start(); // The start function will call all private functions
};