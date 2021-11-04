#include <LevelOneScene.h>


LevelOneScene::LevelOneScene(sf::RenderWindow& renderWindow)
	: mRenderWindow(renderWindow)
{
	mBackgroundTexture = std::make_unique<sf::Texture>();
	mBackgroundTexture->loadFromFile("assets/ygo-background.png");
	mBackgroundImage = std::make_unique<sf::Sprite>(*mBackgroundTexture);
	mBackgroundImage->setScale(1.5, 1.5);

	mCardTextures.emplace_back();
	mCardTextures[0].loadFromFile("assets/ygo-card.png");
	mCardSprites.emplace_back(mCardTextures[0]);
	mCardSprites[0].setScale(0.25, 0.25);
}

void LevelOneScene::Update(double deltaT)
{

}

void LevelOneScene::Render()
{
	mRenderWindow.draw(*mBackgroundImage);

	for (auto& card : mCardSprites)
	{
		mRenderWindow.draw(card);
	}
}

