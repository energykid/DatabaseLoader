#pragma once
#include "YYToolkit/Shared.hpp"
#include "sol/sol.hpp"

using namespace std;
using namespace Aurie;
using namespace YYTK;

namespace DatabaseLoader
{
	class ModuleMain
	{
	public:
		static sol::state lua;
	};
}