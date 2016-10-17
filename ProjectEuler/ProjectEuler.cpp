#include "Header.h"
#include "Problem0001.h"
#include "Problem0002.h"
#include "Problem0003.h"


int main(int argc, char** argv)
{
	std::cout << "Problem 0001: " << problem0001::solve() << std::endl;
	std::cout << "Problem 0002: " << problem0002::solve() << std::endl;
	std::cout << "Problem 0003: " << problem0003::solve() << std::endl;

	system("pause");
	return 0;
}