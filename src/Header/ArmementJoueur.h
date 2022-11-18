//
// Created by amtarolol on 26/10/22.
//

#include "Component.h"
#include "weapons/Projectiles.h"
#include <mutex>

#pragma once


class ArmementJoueur : public Component
        {

public:
    ArmementJoueur();
    ~ArmementJoueur() override;

    void MyUpdate();
    void addProjectile(sf::Vector2f origine, sf::Vector2f mouseLocation);
    std::vector<std::unique_ptr<Projectiles>>* getProjectiles();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;


private:

    std::vector<std::unique_ptr<Projectiles>> projectiles;
};
