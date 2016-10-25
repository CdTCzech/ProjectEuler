#pragma once

#include "Header.h"


namespace problem0013
{
	std::string solve()
	{
		uint64 result = 0;

		if (result != 76'576'500)
		{
			return R"(FAILED! EXPECTED 76'576'500 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}