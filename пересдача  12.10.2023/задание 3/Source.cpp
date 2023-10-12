#include<iostream>

int main(int argc, char* argv[])
{
	int n;
	std::cin >> n;

	int s = 1;

	while (n > 0) 
	{
		s = s * (n % 10);
		n = n / 10;
	}

	std::cout << s;

	return EXIT_SUCCESS;

}
