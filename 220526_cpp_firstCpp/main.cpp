#include <iostream>

int main(int argc, char* argv) {
	int a = 8;
	double b = 3.14;

	a = a << 1; // shift 연산자 0010 -> 0100, 16이 된다.

	std::cout << "Hello" << std::endl;
	std::cout << 5 << std::endl;
	std::cout << 3.14 << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	return 0;
}