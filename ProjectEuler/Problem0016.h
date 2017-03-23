#pragma once

#include "Header.h"
#include "InfInt.h"


namespace problem0016
{
	std::string solve()
	{
		InfInt powerOfTwo = 2;
		for (auto i = 0; i < 999; ++i)
		{
			powerOfTwo *= 2;
		}

		uint64 result = 0;

		for (size_t i = 0; i < powerOfTwo.numberOfDigits(); ++i)
		{
			result += powerOfTwo.digitAt(i);
		}

		if (result != 1'366)
		{
			return R"(FAILED! EXPECTED 1'366 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}
