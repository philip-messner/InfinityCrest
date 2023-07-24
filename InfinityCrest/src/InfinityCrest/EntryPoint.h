#pragma once

#ifdef IC_PLATFORM_WINDOWS

extern Infinity::Application* Infinity::CreateApplication();

int main(int argc, char** argv)
{
	
	auto app = Infinity::CreateApplication();
	
	app->Run();
	delete app;

}

#endif // IC_PLATFORM_WINDOWS

