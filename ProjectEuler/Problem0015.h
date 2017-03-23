#pragma once

#include "Header.h"


namespace problem0015
{
	std::string solve()
	{
		uint64 grid[21][21];

		for (uint64 i = 0; i < 21; ++i)
		{
			grid[i][0] = 1;
			grid[0][i] = 1;
		}

		for (auto i = 1; i < 21; ++i)
		{
			for (auto j = i; j < 21; ++j)
			{
				grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
				grid[j][i] = grid[i][j];
			}
		}

		auto result = grid[20][20];

		if (result != 137'846'528'820)
		{
			return R"(FAILED! EXPECTED 137'846'528'820 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}