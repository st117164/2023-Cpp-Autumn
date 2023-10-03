#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int a = 0;
	a = n / 60;
	n = n - 60 * a;

	if (n >= 36 && n <= 60) {
		a++;
		n = 0;
		std::cout << "0 0 0 0 " << a;
		return 0;
	}
	
	if (n == 19 || n == 18) {
		std::cout << "0 0 0 1 " << a;
		return 0;
	}
	if (n == 9) {
		std::cout << "0 0 1 0 " << a;
		return 0;
	}
	if (n >= 20 && n <= 35 || n >= 10 && n <= 17 || n >= 0 && n <= 8) {
		int b = 0;
		b = n / 20;
		n = n - b * 20;
		int c = 0;
		c = n / 10;
		n = n - c * 10;
		int d = 0;
		d = n / 5;
		n = n - 5 * d;
		std::cout << n << " " << d << " " << c << " " << b << " " << a;
		return 0;
	}

	return 0;
}