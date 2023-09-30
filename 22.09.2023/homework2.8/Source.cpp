#include <iostream>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;
	int s = 0;
	int m = 0;
	std::cin >> a >> b >> c;
	s = a + b + c;
	if (a <= b && a <= c) {
		n = a;
	}
	if (b <= a && b <= c) {
		n = b;
	}
	if (c <= b && c <= a) {
		n = c;
	}
	if (a >= b && a >= c) {
		m = a;
	}
	if (c >= a && c >= b) {
		m = c;
	}
	if (b >= a && b >= c) {
		m = b;
	}
	std::cout << m << " " << s - (n + m) << " " << n;
	return 0;
}