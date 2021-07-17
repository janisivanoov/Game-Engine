#include "stdafx.h"
#include "Header2.h"
Engine::Engine(){
    Vector2f resolution; // Get the screen resolution, create an SFML window and a View
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;
    m_Window.create(VideoMode(resolution.x, resolution.y),
        "Simple Game Engine",
        Style::Fullscreen);
    m_BackgroundTexture.loadFromFile("background.jpg");  // Load the background into the texture
    m_BackgroundSprite.setTexture(m_BackgroundTexture); // Linking the sprite and texture
}
void Engine::start(){
    Clock clock; // Timing
    while (m_Window.isOpen()){
        Time dt = clock.restart(); // Restart the timer and write the measured time in dt
        float dtAsSeconds = dt.asSeconds();
        input();
        update(dtAsSeconds);
        draw();
    }
}