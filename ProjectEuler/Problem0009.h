#pragma once

#include "Header.h"


namespace problem0009
{
	std::string solve()
	{
		for (uint64 a = 1; a < 1000; ++a)
		{
			for (uint64 b = 1; b < 1000; ++b)
			{
				for (uint64 c = 1; c < 1000; ++c)
				{
					if ((a + b + c == 1000) && (a * a + b * b == c * c))
					{
						uint64 result = a * b * c;

						if (result != 31'875'000)
						{
							return R"(FAILED! EXPECTED 31'875'000 RESULT )" + std::to_string(result);
						}

						return std::to_string(result);
					}
				}
			}
		}
	}
}