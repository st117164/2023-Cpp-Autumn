#include <iostream>

int main(int argc, char* argv[]) {
	int k = 0;
	int b = 0;
	int l = 0;
	std::cin >> k;
	for (int i = 1; i <= k; i++) {
		if (i / 10 == 0) {
			l++;
		}
		if (i / 100 == 0 && i / 10 != 0) {
			if (i / 10 == i % 10) {
				l++;
			}
		}
		if (i / 100 != 0 && i / 10 != 0 && i / 1000 == 0) {
			if (i / 100 == i % 10) {
				l++;
			}
		}
		if (i / 100 != 0 && i / 10 != 0 && i / 1000 != 0 && i / 10000 == 0) {
			if (i / 1000 == i % 10 && (i / 100) % 10 == (i % 100) / 10) {
				l++;
			}
		}
		if (i / 100 != 0 && i / 10 != 0 && i / 1000 != 0 && i / 10000 != 0 && i / 100000 == 0) {
			if (i / 10000 == i % 10 && (i / 1000) % 10 == (i % 100) / 10) {
				l++;
			}
		}
	}
	std::cout << l;
	return 0;
}