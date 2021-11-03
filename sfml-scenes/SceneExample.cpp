#include <chrono>
#include <TitleScene.h>

int main()
{
	TitleScene titleScene;

	using std::chrono::system_clock;
	system_clock::time_point lastFrameTime = system_clock::now();
	while (true)
	{
		auto deltaT = std::chrono::duration_cast < std::chrono::milliseconds> (system_clock::now() - lastFrameTime).count();
		titleScene.Update(deltaT);
		titleScene.Render();
	}

	return 0;
}