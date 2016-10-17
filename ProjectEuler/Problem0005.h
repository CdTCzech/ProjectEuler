#pragma once

#include "Header.h"


uint64 gcd(uint64 x, uint64 y)
{
	while (true)
	{
		if (x == 0) return y;
		y %= x;
		if (y == 0) return x;
		x %= y;
	}
}

uint64 lcm(uint64 x, uint64 y)
{
	uint64 result = gcd(x, y);

	return result ? (x / result * y) : 0;
}


namespace problem0005
{
	std::string solve()
	{
		std::array<uint64, 20> numbers1to20 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
		uint64 result = std::accumulate(numbers1to20.begin(), numbers1to20.end(), static_cast<uint64>(1), lcm);

		if (result != 232'792'560)
		{
			return R"(FAILED! EXPECTED 232'792'560 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}