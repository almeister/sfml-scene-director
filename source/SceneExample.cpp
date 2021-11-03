#include <SFML/Graphics.hpp>
#include <TitleScene.h>
#include <SceneDirector.h>


int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 1200), "Scenes in SFML");
	window.setFramerateLimit(60);
	SceneDirector sceneDirector(window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)
			{
				switch (event.key.code)
				{
				case sf::Keyboard::Escape:
					window.close();
				case sf::Keyboard::Space:
					sceneDirector.LoadLevelOne();
				default:
					break;
				}
			}
		}

		sceneDirector.Update();
		sceneDirector.Render();
	}

	return 0;
}