#include <iostream>
#include <ctime>
#include <cmath>
#include<set>

int DeleteElements(int* a, int len)
{
	std::set <int> s;
	for (int i = 0; i < len; ++i)
	{
		s.insert(a[i]);
	}

	delete[] a;

	int* b = new int[sizeof(s)] { 0 };

	int z = 0;
	for (int n : s)
	{
		b[z] = n;
		z++;
	}

	a = b;
	return 0;
}

void PrintMenu()
{
	std::cout << "0 - exit" << std::endl;
	std::cout << "1 - print array" << std::endl;
	std::cout << "2 - add element to array" << std::endl;
	std::cout << "3 - delete " << std::endl;
	std::cout << "4 - Sort array in ascending order " << std::endl;
	std::cout << "5 - Expand array" << std::endl;
	std::cout << "6 - Swap the first maximum and last minimum element of an array " << std::endl;
	std::cout << "7 - Remove all duplicates from an array " << std::endl;
	std::cout << "8 - Add n random elements to the array " << std::endl;
}

int PrintArray(int len, int* a)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << a[i] << " ";
	}
	return 0;
}

int AddElement(int e, int* a, int len)
{
	int* b = new int[len + 1] { 0 };

	for (int i = 0; i < len; ++i)
	{
		b[i] = a[i];
	}

	b[len] = e;

	delete[] a;
	a = b;

	return 0;
}

int SortArray(int* a, int len)
{

	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len - 2; ++j)
		{
			if (a[j] > a[j + 1])
			{
				std::swap(a[j], a[j + 1]);
			}
		}
	}
	return 0;
}

int DeleteElement(int* a, int len)
{
	int* b = new int[len - 1] { 0 };

	for (int i = 0; i < len - 1; ++i)
	{
		b[i] = a[i];
	}
	delete[] a;
	a = b;


	return 0;
}

int ReverseArray(int* a, int len)
{
	int* b = new int[len] { 0 };

	for (int i = 0; i < len; ++i)
	{
		b[len - i - 1] = a[i];
	}

	delete[] a;
	a = b;

	return 0;

}

int SwapMaxMin(int* a, int len)
{
	int ma = std::max(a[0], a[1]);
	int mi = std::max(a[0], a[1]);

	for (int i = 0; i < len; ++i)
	{
		ma = std::max(a[i], ma);
		mi = std::min(a[i], mi);
	}
	for (int i = 0; i < len; ++i)
	{
		if (a[i] == ma)
		{
			a[i] = mi;
			break;
		}

	}

	for (int i = 0; i < len; ++i)
	{
		if (a[len - i - 1] == mi)
		{
			a[i] = ma;
			break;
		}

	}
	return 0;
}

int AddNElements(int* a, int len, int n)
{
	srand(time(0));

	int* b = new int[len + n] { 0 };

	for (int i = 0; i < len; ++i)
	{
		b[i] = a[i];
	}

	for (int i = len; i < len + n; ++i)
	{
		b[i] = rand() % 1000 - rand() % 1000;
	}
	delete[] a;
	a = b;
	return 0;
}