#pragma once

#include "Header.h"


namespace problem0003
{
	std::string solve()
	{
		uint64 result = 600'851'475'143;
		uint64 z = 2;

		while (z * z <= result)
		{
			if (result % z == 0)
			{
				result /= z;
			}
			else
			{
				++z;
			}
		}

		if (result != 6'857)
		{
			return R"(FAILED! EXPECTED 6'857 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}