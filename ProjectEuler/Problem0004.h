#pragma once

#include "Header.h"


namespace problem0004
{
	std::string solve()
	{
		std::string numberString;
		std::string numberStringReversed;
		uint64 result = 0;

		for (size_t x = 0; x < 1000; ++x)
		{
			for (size_t y = 0; y < 1000; ++y)
			{
				uint64 number = x * y;
				numberString = std::to_string(number);
				numberStringReversed = numberString;
				std::reverse(numberString.begin(), numberString.end());
				if (numberString == numberStringReversed && number > result)
				{
					result = number;
				}
			}
		}

		if (result == 906'609)
		{
			return std::to_string(result);
		}
		else
		{
			return R"(FAILED! EXPECTED 906'609 RESULT )" + std::to_string(result);
		}
	}
}