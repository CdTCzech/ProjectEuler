#pragma once

#include "Header.h"


namespace problem0007
{
	std::string solve()
	{
		std::vector<uint64> primes;
		primes.push_back(2);
		for (uint64 i = 3; i < 1'000'000; ++i)
		{
			bool prime = true;
			for (uint64 j = 0; j < primes.size() && primes[j] * primes[j] <= i; ++j)
			{
				if (i % primes[j] == 0)
				{
					prime = false;
					break;
				}
			}
			if (prime)
			{
				primes.push_back(i);
				if (primes.size() == 10'001)
				{
					break;
				}
			}
		}

		uint64 result = primes[10'000];

		if (result != 104'743)
		{
			return R"(FAILED! EXPECTED 104'743 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}