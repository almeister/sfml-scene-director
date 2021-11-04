#pragma once

#include <Scene.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SceneDirector.h>

class TitleScene : public Scene
{
public:
	TitleScene(SceneDirector&, sf::RenderWindow&);

	void Update(double deltaT) override;
	void Render() override;

	void OnKeyPressed(sf::Keyboard::Key) override;

private:
	SceneDirector& mSceneDirector;
	sf::RenderWindow& mRenderWindow;
	std::unique_ptr<sf::Texture> mBackgroundTexture;
	std::unique_ptr<sf::Sprite> mBackgroundImage;
};