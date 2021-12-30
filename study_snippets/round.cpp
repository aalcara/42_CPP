#include <iostream>
#include <cmath>

int main(void){
	std::cout << (int)42.42f << std::endl;
	std::cout << (int)roundf(42.42f) << std::endl;
	std::cout << (42.42f * (1 << 8)) << std::endl;
	std::cout << (int)roundf(42.42f * (1 << 8)) << std::endl;
	std::cout << (int)roundf(42.42f * (100)) << std::endl;
	return 0;
}
