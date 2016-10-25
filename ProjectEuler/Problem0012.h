#pragma once

#include "Header.h"


namespace problem0012
{
	std::string solve()
	{
		uint64 result = 0;

		for (uint64 i = 1; i < 1'000'000; ++i)
		{
			uint64 divisors = 0;
			result += i;

			for (uint64 j = 1; j < sqrt(result); ++j)
			{
				if (result % j == 0) {
					++divisors;
					if (j != (result / j)) {
						++divisors;
					}
				}
			}

			if (divisors >= 500)
			{
				break;
			}
		}

		if (result != 76'576'500)
		{
			return R"(FAILED! EXPECTED 76'576'500 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}