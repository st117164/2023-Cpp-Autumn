#include<iostream>

int main(int argc, char* argv[])
{
	int n;
	std::cin >> n;

	if (n > 0)
	{
		for (int i = n; i >= 0; --i) 
			{
				std::cout << i << " ";
			}
	}
	
	else
	{
		for (int i = n; i <= 0; ++i)
		{
			std::cout << i << " ";
		}
	}

	return EXIT_SUCCESS;

}
