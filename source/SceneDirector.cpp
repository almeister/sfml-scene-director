#include <SceneDirector.h>
#include <TitleScene.h>
#include <LevelOneScene.h>


SceneDirector::SceneDirector(sf::RenderWindow& window)
	: mWindow(window)
{
	mScenes.emplace("title", new TitleScene(window));
	mScenes.emplace("level-1", new LevelOneScene(window));
	LoadTitle();

	mLastFrameTime = system_clock::now();
}

void SceneDirector::Update()
{
	if (mCurrentScene)
	{
		auto deltaT = std::chrono::duration_cast<std::chrono::milliseconds>(system_clock::now() - mLastFrameTime).count();
		mCurrentScene->Update(static_cast<double>(deltaT));
	}
}

void SceneDirector::Render()
{
	if (mCurrentScene)
	{
		mWindow.clear(sf::Color::White);
		mCurrentScene->Render();
		mWindow.display();
	}
}

void SceneDirector::LoadTitle()
{
	mCurrentScene = mScenes.at("title").get();
}

void SceneDirector::LoadLevelOne()
{
	mCurrentScene = mScenes.at("level-1").get();
}