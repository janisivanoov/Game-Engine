#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
//Bob is just a person(hero of game)
class Bob{
private:
    Vector2f m_Position; // Position of Bob
    Sprite m_Sprite; // Declare object Sprite
    Texture m_Texture; // Adding texture
    bool m_LeftPressed; // Boolean variables to track the direction of travel
    bool m_RightPressed;
    float m_Speed;  // Bob's speed in pixels per second
public:
    Bob(); // Setting up Bob in the constructor
    Sprite getSprite(); // To send a sprite to the main function
    void moveLeft(); // For Bob's movement
    void moveRight();
    void stopLeft(); // Termination of movement
    void stopRight();
    void update(float elapsedTime); // This function will be called every frame
};