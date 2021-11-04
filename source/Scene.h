#pragma once

#include <SFML/Window/Event.hpp>


class Scene
{
public:
    virtual void Update(double deltaT) = 0;
    virtual void Render() = 0;

	virtual bool HandleInput(sf::Event& event);
	virtual void OnKeyPressed(sf::Keyboard::Key) {};
};

