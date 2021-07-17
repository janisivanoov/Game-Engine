#include "stdafx.h"
#include "Header1.h"

Bob::Bob(){
    m_Speed = 400; // Write to Bob's variable speed
    m_Texture.loadFromFile("bob.png"); // Linking the texture and sprite
    m_Sprite.setTexture(m_Texture);
    m_Position.x = 500; // Set Bob's starting position in pixels
    m_Position.y = 800;
}
Sprite Bob::getSprite(){ // Making the private sprite available to the draw () function
    return m_Sprite;
}
void Bob::moveLeft(){
    m_LeftPressed = true;
}
void Bob::moveRight(){
    m_RightPressed = true;
}
void Bob::stopLeft(){
    m_LeftPressed = false;
}
void Bob::stopRight(){
    m_RightPressed = false;
}
// Move Bob based on user input in this frame,
// elapsed time and speed
void Bob::update(float elapsedTime){
    if (m_RightPressed){
        m_Position.x += m_Speed * elapsedTime;
    }
    if (m_LeftPressed){
        m_Position.x -= m_Speed * elapsedTime;
    }
    m_Sprite.setPosition(m_Position); // Now move the sprite to a new position

}