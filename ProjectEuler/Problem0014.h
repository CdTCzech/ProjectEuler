#pragma once

#include "Header.h"


namespace problem0014
{
	std::string solve()
	{
		std::tuple<uint64, uint64> result = { 0, 0 };
		for (uint64 i = 1; i <= 1'000'000; ++i)
		{
			auto number = i;
			uint64 chainNumber = 1;
			while (number != 1)
			{
				++chainNumber;
				if (number % 2 == 0) number /= 2;
				else number = 3 * number + 1;
			}

			if (chainNumber > std::get<0>(result))
			{
				std::get<0>(result) = chainNumber;
				std::get<1>(result) = i;
			}
		}

		if (std::get<1>(result) != 233'168)
		{
			return R"(FAILED! EXPECTED 233'168 RESULT )" + std::to_string(std::get<1>(result));
		}

		return std::to_string(std::get<1>(result));
	}
}