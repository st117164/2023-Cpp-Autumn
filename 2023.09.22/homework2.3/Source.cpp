#include<iostream>
int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;
	if (a == 0 && b != 0) {
		std::cout << "NO";
		return 0;
	}
	if (a == 0 && b == 0) {
		std::cout << "INF";
		return 0;
	}
	if (a != 0 && b == 0) {
		std::cout << "INF";
		return 0;
	}
	if (c == 0 && d == 0) {
		std::cout << "NO";
	}
	int x = 0;
	x = -1 * b / a;
	if (c != 0) {
		if (x == -1 * d / c) {
		std::cout << "NO";
		return 0;
	}   
	}
	if (b % a == 0) {
			std::cout << x;
			return 0;
	}
	std::cout << "NO";
	return 0;
}