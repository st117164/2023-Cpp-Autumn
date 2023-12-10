#include<iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int a = 0;
	a = n % 10;
	int b = n % 100;
	
	if (b >= 12 && b<=13) {
		std::cout << n << " bochek";
		return 0;
	}
	if (a == 1) {
		std::cout << n << " bochka";
		return 0;
	}
	if (a >= 2 && a<=4) {
		std::cout << n << " bochki";
		return 0;
	}

	std::cout << n << " bochek";

	return 0;
}