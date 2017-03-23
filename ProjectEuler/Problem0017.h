#pragma once

#include "Header.h"


namespace problem0017
{
	std::string solve()
	{
		// numbers 1-9
		constexpr uint64 oneToNine = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4;
		// numbers  10-19
		constexpr uint64 tenToNineghteen = 3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8;
		// numbers 20-99
		constexpr uint64 twentyToNinetyNine = 10 * (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) + 8 * oneToNine;
		// numbers 1-99
		constexpr uint64 oneToNinetyNine = oneToNine + tenToNineghteen + twentyToNinetyNine;
		// numbers 100-999 cointains 1-9 100 times 
		constexpr uint64 oneToNineHundredTimes = oneToNine * 100;
		// numbers 100-999 contains 1-99 9 times
		constexpr uint64 oneToNinetyNineNineTimes = oneToNinetyNine * 9;
		// numbers 100-999 contains "hundred" 9 times
		constexpr uint64 hundredNineTimes = 7 * 9;
		// numbers 100-999 contains "hundred and" 9 * 99 times
		constexpr uint64 hundredAndNinetyNineTimesNineTimes = 10 * 9 * 99;
		// numbers 100-999
		constexpr uint64 hundredToNineHundredAndNinetyNine = oneToNineHundredTimes + oneToNinetyNineNineTimes + hundredNineTimes + hundredAndNinetyNineTimesNineTimes;
		// numbers 1-1000
		constexpr uint64 result = oneToNinetyNine + hundredToNineHundredAndNinetyNine + 11;

		if (result != 21'124)
		{
			return R"(FAILED! EXPECTED 21'124 RESULT )" + std::to_string(result);
		}

		return std::to_string(result);
	}
}