
#include <cstdio>

#include <framework/Framework.h>

#include <tool/Tool.h>


namespace app
{
	auto App () -> void
	{
		std::puts("App");

		framework::Framework();

		tool::Tool();

		return;
	}
}


auto main () -> int
{
	app::App();

	return 0;
}
