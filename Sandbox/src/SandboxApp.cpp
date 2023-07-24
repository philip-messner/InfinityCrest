#include <InfinityCrest.h>

class Sandbox : public Infinity::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

private:

};

Infinity::Application* Infinity::CreateApplication()
{
	return new Sandbox();
}
