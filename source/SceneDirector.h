#pragma once

#include <unordered_map>
#include <Scene.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <chrono>

using std::chrono::system_clock;

class SceneDirector
{
public:
	SceneDirector(sf::RenderWindow&);

	void HandleInput(sf::Event&);
	void Update();
	void Render();

	void LoadTitle();
	void LoadLevelOne();

private:
	sf::RenderWindow& mWindow;
	std::unordered_map<std::string, std::unique_ptr<Scene>> mScenes;
	Scene* mCurrentScene;
	system_clock::time_point mLastFrameTime;
};