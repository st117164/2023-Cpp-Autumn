#include<iostream>

int main(int argc, char* argv[])
{
	for (int i = 1; i < 6; ++i) {
		std::cout << "X" << " ";
	}
	std::cout << "    X             X       X";

	for (int i = 1; i < 5; ++i) {
		std::cout << std::endl;
		std::cout << "    X         X             X       X";
	}
	std::cout << std::endl;
	for (int i = 1; i < 6; ++i) {
		std::cout << "X" << " ";
	}
	std::cout << "    ";
	for (int i = 1; i < 6; ++i) {
		std::cout << "X" << " ";
	}
	std::cout << "    ";
	for (int i = 1; i < 6; ++i) {
		std::cout << "X" << " ";
	}
	return EXIT_SUCCESS;
}