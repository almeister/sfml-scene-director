#pragma once

#include <Scene.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class TitleScene : public Scene
{
public:
	TitleScene(sf::RenderWindow&);

	void Update(double deltaT) override;
	void Render() override;

private:
	sf::RenderWindow& mRenderWindow;
	std::unique_ptr<sf::Texture> mBackgroundTexture;
	std::unique_ptr<sf::Sprite> mBackgroundImage;
};