#include<iostream>
int main(int argc, char* argv[]) {
	int v, t;
	std::cin >> v;
	std::cin >> t;

	std::cout << (109 + (v * t) % 109) % 109 + 1;

	return 0;
}