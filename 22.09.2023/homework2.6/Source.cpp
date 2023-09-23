#include<iostream>

int main(int argc, char* argv[]) {
    int l = 0;
    int n;
    int k;
    int m;
    std::cin >> k >> m >> n;
    if (n <=k) {
        l = 2 * m;
        std::cout << l;
        return 0;
    }
    l = 2 * n / k * m;
    if (2 * n % k != 0) {
        l = l + m;
    }
         
    std::cout << l;


	
	return 0;
}