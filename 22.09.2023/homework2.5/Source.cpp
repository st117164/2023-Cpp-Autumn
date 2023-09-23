#include<iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int a = 0;
	a = n % 10;
	int b = n % 100;
	
	if (b == 12) {
		std::cout << n << " bochek";
		return 0;
	}
	if (b == 14) {
		std::cout << n << " bochek";
		return 0;
	}
	if (b == 11) {
		std::cout << n << " bochek";
		return 0;
	}
	if (b == 13) {
		std::cout << n << " bochek";
	}
	if (a == 1) {
		std::cout << n << " bochka";
		return 0;
	}
	if (a == 2) {
		std::cout << n << " bochki";
		return 0;
	}
	if (a == 3) {
		std::cout << n << " bochki";
		return 0;
	}
	if (a == 4) {
		std::cout << n << " bochki";
		return 0;
	}
	std::cout << n << " bochek";


}