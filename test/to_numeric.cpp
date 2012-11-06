#include <iostream>
#include "../to_numeric.hpp"

int main()
{
	// std::string -> unsigned long long
	std::cout << nott::to_numeric<unsigned long long>("100000000000000ULL") << std::endl;

	// float -> int
	std::cout << nott::to_numeric<float>(10.0001f) << std::endl;

	// char -> int
	std::cout << nott::to_numeric<int>('1') << std::endl;

	return 0;
}
