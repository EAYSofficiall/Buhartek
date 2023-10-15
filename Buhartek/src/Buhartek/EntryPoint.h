#pragma once

#ifdef BT_PLATFORM_WINDOWS

extern Buhartek::Application* Buhartek::CreateApplication();


int main(int argv, char** argc)
{
	auto app = Buhartek::CreateApplication();
	app->Run();
	delete app;
}

#endif