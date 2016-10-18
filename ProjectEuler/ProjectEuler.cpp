#include "Header.h"
#include "Problem0001.h"
#include "Problem0002.h"
#include "Problem0003.h"
#include "Problem0004.h"
#include "Problem0005.h"
#include "Problem0006.h"
#include "Problem0007.h"


int main(int argc, char** argv)
{
	std::cout << "Problem 0001: " << problem0001::solve() << std::endl;
	std::cout << "Problem 0002: " << problem0002::solve() << std::endl;
	std::cout << "Problem 0003: " << problem0003::solve() << std::endl;
	std::cout << "Problem 0004: " << problem0004::solve() << std::endl;
	std::cout << "Problem 0005: " << problem0005::solve() << std::endl;
	std::cout << "Problem 0006: " << problem0006::solve() << std::endl;
	std::cout << "Problem 0007: " << problem0007::solve() << std::endl;

	system("pause");
	return 0;
}