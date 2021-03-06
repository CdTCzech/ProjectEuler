#include "Problems0000to0025.h"


int main(int argc, char** argv)
{
	auto start = std::chrono::high_resolution_clock::now();
	{
		std::cout << "Problem 0001: " << problem0001::solve() << std::endl;
		std::cout << "Problem 0002: " << problem0002::solve() << std::endl;
		std::cout << "Problem 0003: " << problem0003::solve() << std::endl;
		std::cout << "Problem 0004: " << problem0004::solve() << std::endl;
		std::cout << "Problem 0005: " << problem0005::solve() << std::endl;
		std::cout << "Problem 0006: " << problem0006::solve() << std::endl;
		std::cout << "Problem 0007: " << problem0007::solve() << std::endl;
		std::cout << "Problem 0008: " << problem0008::solve() << std::endl;
		std::cout << "Problem 0009: " << problem0009::solve() << std::endl;
		std::cout << "Problem 0010: " << problem0010::solve() << std::endl;
		std::cout << "Problem 0011: " << problem0011::solve() << std::endl;
		std::cout << "Problem 0012: " << problem0012::solve() << std::endl;
		std::cout << "Problem 0013: " << problem0013::solve() << std::endl;
		std::cout << "Problem 0014: " << problem0014::solve() << std::endl;
		std::cout << "Problem 0015: " << problem0015::solve() << std::endl;
		std::cout << "Problem 0016: " << problem0016::solve() << std::endl;
		std::cout << "Problem 0017: " << problem0017::solve() << std::endl;
		//std::cout << "Problem 0018: " << problem0018::solve() << std::endl;
		std::cout << "Problem 0019: " << problem0019::solve() << std::endl;
	}
	auto end = std::chrono::high_resolution_clock::now();
	auto timeSpan = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	std::cout << "FINAL TIME: " << timeSpan.count() << " milliseconds." << std::endl;

	system("pause");
	return 0;
}