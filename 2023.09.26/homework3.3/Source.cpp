#include<iostream>
#include <cmath>
int main(int argc, char* argv[]) {
	int a = 0;
	int l = 0;
	std::cin >> a;
	int i = 1;
	for (i; i*i < a ; i++) {
		
		if ((a % i) == 0) {
			l=l+2;
		}
		
	}
	if (i * i == a) {
		l = l + 1;
	}
	std::cout << l;
	return 0;
}