#include <LevelOneScene.h>


LevelOneScene::LevelOneScene(sf::RenderWindow& renderWindow)
	: mRenderWindow(renderWindow)
{
	mBackgroundTexture = std::make_unique<sf::Texture>();
	mBackgroundTexture->loadFromFile("alex-kidd.png");
	mBackgroundImage = std::make_unique<sf::Sprite>(*mBackgroundTexture);
	mBackgroundImage->setScale(1.5, 1.5);
}

void LevelOneScene::Update(double deltaT)
{

}

void LevelOneScene::Render()
{
	mRenderWindow.draw(*mBackgroundImage);
}