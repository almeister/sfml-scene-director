#include <Scene.h>

bool Scene::HandleInput(sf::Event& event)
{
	if (event.type == sf::Event::KeyPressed)
	{
		OnKeyPressed(event.key.code);

		return true;
	}

	return false;
}