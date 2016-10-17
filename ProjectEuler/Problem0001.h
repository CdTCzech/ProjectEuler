#pragma once

#include "Header.h"


namespace problem0001
{
	std::string solve()
	{
		bool multiplesArray[1000] = { false };
		uint64 result = 0;

		for (size_t i = 3; i < 1000; i += 3)
		{
			multiplesArray[i] = true;
		}

		for (size_t i = 5; i < 1000; i += 5)
		{
			multiplesArray[i] = true;
		}

		for (size_t i = 0; i < 1000; ++i)
		{
			if (multiplesArray[i] == true)
			{
				result += i;
			}
		}

		if (result == 233'168)
		{
			return std::to_string(result);
		}
		else
		{
			return R"(FAILED! EXPECTED 233'168 RESULT )" + std::to_string(result);
		}
	}
}