#include <Buhartek.h>

class Sandbox : public Buhartek::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Buhartek::Application* Buhartek::CreateApplication()
{
	return new Sandbox();
}