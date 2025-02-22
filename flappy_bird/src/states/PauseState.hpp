/*
    ISPPJ1 2023
    Study Case: Flappy Bird

    Author: Mint
    

    This file contains the declaration of the class PauseState.
*/

#pragma once

#include <src/Bird.hpp>
#include <src/World.hpp>
#include <src/states/BaseState.hpp>

class PauseState: public BaseState
{
public:
    PauseState(StateMachine* sm) noexcept;

    void enter(std::shared_ptr<World> _world = nullptr, std::shared_ptr<Bird> _bird = nullptr, int score = 0) noexcept override;

    void handle_inputs(const sf::Event& event) noexcept override;

    void update(float dt) noexcept override;

    void render(sf::RenderTarget& target) const noexcept override;

private:
    std::shared_ptr<Bird> bird;
    std::shared_ptr<World> world;
    int score;
};
