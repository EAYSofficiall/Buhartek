#pragma once

#include "Core.h"

namespace Buhartek
{
	class BUHARTEK_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};


	//To be defined in CLIENT
	Application* CreateApplication();

}