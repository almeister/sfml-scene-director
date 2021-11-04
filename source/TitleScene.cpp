#include <TitleScene.h>
#include <SFML/Graphics/CircleShape.hpp>


TitleScene::TitleScene(SceneDirector& sceneDirector, sf::RenderWindow& renderWindow)
	: mSceneDirector(sceneDirector)
	, mRenderWindow(renderWindow)
{
	mBackgroundTexture = std::make_unique<sf::Texture>();
	mBackgroundTexture->loadFromFile("assets/boom.png");
	mBackgroundImage = std::make_unique<sf::Sprite>(*mBackgroundTexture);
	mBackgroundImage->setOrigin(mBackgroundTexture->getSize().x / 2, mBackgroundTexture->getSize().y / 2);
	mBackgroundImage->move(mRenderWindow.getSize().x / 2, mRenderWindow.getSize().y / 2);
	mBackgroundImage->setScale(2, 2);
}

void TitleScene::Update(double deltaT)
{

}

void TitleScene::Render()
{
	mRenderWindow.draw(*mBackgroundImage);
}

void TitleScene::OnKeyPressed(sf::Keyboard::Key key)
{
	switch (key)
	{
	case sf::Keyboard::Space:
		mSceneDirector.LoadLevelOne();
	default:
		break;
	}
}