#include<iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int l = 0;
	std::cin >> a;
	for (int i = 0; i <= a; i++) {
		while (b < i) {
			if (l == a) {
			return 0;
		}
			b++;
			l++;
			if (i == a) {
				std::cout << i;
				return 0;
			}
			std::cout << i << " ";
				if (l == a) {
				return 0;
			}
		}

		b = 0;
		
	}
	return 0;
}