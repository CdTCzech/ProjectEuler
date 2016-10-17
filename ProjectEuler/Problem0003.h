#pragma once

#include "Header.h"


namespace problem0003
{
	std::string solve()
	{
		uint64 maximum = 600'851'475'143;
		uint64 z = 2;

		while (z * z <= maximum)
		{
			if (maximum % z == 0)
			{
				maximum /= z;
			}
			else
			{
				++z;
			}
		}

		if (maximum > 1)
		{
			if (maximum == 6'857)
			{
				return std::to_string(maximum);
			}
			else
			{
				return R"(FAILED! EXPECTED 6'857 RESULT )" + std::to_string(maximum);
			}
		}
	}
}