#pragma once

#include "Header.h"


namespace problem0006
{
	std::string solve()
	{
		uint64 sumOfSquares = 0;
		uint64 squareOfSum = 0;
		uint64 result = 0;

		for (uint64 i = 0; i <= 100; ++i)
		{
			sumOfSquares += i * i;
		}

		for (uint64 i = 0; i <= 100; ++i)
		{
			squareOfSum += i;
		}

		squareOfSum *= squareOfSum;
		result = squareOfSum - sumOfSquares;

		if (result != 25'164'150)
		{
			return R"(FAILED! EXPECTED 25'164'150 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}