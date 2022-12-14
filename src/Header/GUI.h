//
// Created by amtarolol on 29/10/22.
//

#include "SFML/Graphics.hpp"
#include "Player.h"


#include <memory>
#pragma once

class GUI : public sf::View, public sf::Drawable {

public:
    GUI(std::shared_ptr<Player> player, unsigned int width, unsigned int height, std::shared_ptr<sf::Font> style);
    ~GUI() override;
    void MyUpdate();
    void prepareGUI();


    sf::RectangleShape getPvBarreRestant();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:


    sf::RectangleShape pvBarreRestant;
    sf::RectangleShape pvBarreMax;
    sf::Text kills;
    std::shared_ptr<Player> player;
    std::shared_ptr<sf::Font> font;


    unsigned int width;
    unsigned int height;

};

