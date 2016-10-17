#pragma once

#include "Header.h"


namespace problem0002
{
	std::string solve()
	{
		uint64 number1 = 0;
		uint64 number2 = 1;
		uint64 result = 0;

		while (number2 < 4'000'000)
		{
			uint64 number3 = number1 + number2;
			if (number3 % 2 == 0) result += number3;
			number1 = number2;
			number2 = number3;
		}

		if (result == 4'613'732)
		{
			return std::to_string(result);
		}
		else
		{
			return R"(FAILED! EXPECTED 4'613'732 RESULT )" + std::to_string(result);
		}
	}
}