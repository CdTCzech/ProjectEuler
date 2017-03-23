#pragma once

#include "Header.h"


namespace problem0019
{
	std::string solve()
	{
		uint64 result = 0;
		for (int year = 1901; year < 2000; ++year)
		{
			for (int month = 1; month <= 12; ++month)
			{
				double m = static_cast<double>((month - 3) % 12 + 1);
				int Y = (m > 10) ? year - 1 : year;
				int y = Y % 100;
				int c = (Y - (Y % 100)) / 100;

				int w = ((1 + static_cast<int>(floor(2.6*m - 0.2)) + y + y / 4 + c / 4 - 2 * c)) % 7;

				if (w == 0) {
					++result;
				}
			}
		}

		if (result != 171)
		{
			return R"(FAILED! EXPECTED 171 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}