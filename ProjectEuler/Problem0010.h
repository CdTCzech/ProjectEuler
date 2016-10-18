#pragma once

#include "Header.h"


namespace problem0010
{
	std::string solve()
	{
		std::vector<uint64> primes;
		primes.push_back(2);
		for (uint64 i = 3; i < 2'000'000; ++i)
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
			}
		}

		uint64 result = std::accumulate(primes.cbegin(), primes.cend(), static_cast<uint64>(0));

		if (result != 142'913'828'922)
		{
			return R"(FAILED! EXPECTED 142'913'828'922 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}