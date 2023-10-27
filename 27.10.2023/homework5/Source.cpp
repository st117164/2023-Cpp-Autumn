#include <iostream>
#include <ctime>
#include <cmath>
#include<set>
#include"Header.h"

int main(int argc, char* argv[]) 
{
	bool b;
	b = 0;

	int len;
	len = 2;

	std::cout << "enter the length of the array greater than one, which will be filled with random numbers";
	std::cin >> len;

	int* a = new int[len] { 0 };

	srand(time(0));

	for (int i = 0; i < len; ++i)
	{
		a[i] = rand() % 1000 - rand() % 1000;
	}

	while(b==0)
	{	
		system("cls");
		PrintMenu();
		
		int n;
		n = 0;

		std::cin >> n;

		switch (n)
		{
		case 0:
			return 0;
		case 1:
			PrintArray(len,a);
		case 2:
		{
			std::cout << "enter element";
			int e;
			e = 0;
			std::cin >> e;
			AddElement(e, a, len);
			len = sizeof(a);
		}
		case 3:
		{
			DeleteElement(a, len);
			len = sizeof(a);
		}
		case 4:
			SortArray(a,len);
		case 5:
			ReverseArray(a, len);
		case 6:
			SwapMaxMin(a, len);
		case 7:
		{
			DeleteElements(a, len);
			len = sizeof(a);
		}
		case 8:
		{
			std::cout << "enter n";
			int l;
			l = 0;
			std::cin >> l;
			AddNElements(a, len, l);
			len = sizeof(a);
		}
		}
	}


}