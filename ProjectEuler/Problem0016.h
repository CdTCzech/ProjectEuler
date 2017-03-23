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

		return std::to_string(result);
	}
}
