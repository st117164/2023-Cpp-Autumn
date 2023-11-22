#include<iostream>

void help(int n, int start, int finish) {
	if (n > 0) {
		int tmp = 6 - start - finish;
		help(n - 1, start, tmp);
		std::cout << n << " " << start << " " << finish << std::endl;
		help(n - 1, tmp, finish);
	}
}

bool Pr(int a, int b)
{
	if (a == 1 && b == 2)
	{
		return 1;
	}

	if (a == 2 && b == 1)
	{
		return 0;
	}

	if (a == 2 && b == 3)
	{
		return 1;
	}

	if (a == 3 && b == 2)
	{
		return 0;
	}

	if (a == 3 && b == 1)
	{
		return 1;
	}

	if (a == 1 && b == 3)
	{
		return 0;
	}
}

void hanoi(int n, int i, int k)
{
	if (n == 1)
	{
		std::cout << n << " " << i << " " << k << std::endl;
	}
	else
	{
		int tmp = 6 - i - k;
		hanoi(n - 1, i, tmp);
		std::cout << n << " " << i << " " << k << std::endl;
		hanoi(n - 1, tmp, k);
	}
}

void hanoi2(int n, int i, int k)
{
    if (n > 0)
    {
        if ((i + k) == 4)
        {
            hanoi2(n, i, 2);
            hanoi2(n, 2, k);
        }
        else
        {
            hanoi2(n - 1, i, 6 - i - k);
            std::cout << n << " " << i << " " << k << std::endl;
            hanoi2(n - 1, 6 - i - k, k);
        }
    }
}

void hanoi3(int n, int i, int k) {
	if (n > 0) {
		int tmp = 6 - i - k;
		if (Pr(i, k)) {
			hanoi3(n - 1, i, tmp);
			std::cout << n << " " << i << " " << k << std::endl;
			hanoi3(n - 1, tmp, k);
		}
		else {
			hanoi3(n - 1, i, k);
			std::cout << n << " " << i << " " << tmp << std::endl;
			hanoi3(n - 1, k, i);
			std::cout << n << " " << tmp << " " << k << std::endl;
			hanoi3(n - 1, i, k);
		}
	}
}

void hanoi4(int n, int i, int k) {
	int tmp = 6 - i - k;
	if (n == 1) {
		std::cout << n << " " << i << " " << k << std::endl;
	}
	else {
		hanoi4(n - 1, i, k);
		std::cout << n << " " << i << " " << tmp << std::endl;
		hanoi4(n - 1, k, i);
		std::cout << n << " " << tmp << " " << k << std::endl;
		hanoi4(n - 1, i, k);
	}
}

void hanoi5(int n)
{
	int finish;
	if (n % 2 == 0) {
		finish = 3;
	}
	else {
		finish = 2;
	}
	int start = 1;
	help(n, start, finish);
	int tmp = 5 - finish;
	for (int i = n; i > 0; i--) {
		help(i - 1, finish, tmp);
		std::swap(finish, tmp);
	}
}

void PrintMenu() {
	std::cout << "enter 0 to exit" << std::endl;
	std::cout << "enter 1 to check Hanoi Towers" << std::endl;
	std::cout << "enter 2 to check Repair in Hanoi" << std::endl;
	std::cout << "enter 3 to check Cycle Towers" << std::endl;
	std::cout << "enter 3 to check Unfair Towers" << std::endl;
}

int main() {

	bool b = 0;

	while (b == 0)
	{
		system("cls");
		PrintMenu();

		int n;
		n = 0;

		std::cin >> n;
		switch (n)
		{
		case(0):
		{
			return 0;
		}
		case(1):
		{
			hanoi(n, 1, 3);
		}
		case(2):
		{
			hanoi2(n, 1, 3);
		}
		case(3):
		{
			hanoi3(n, 1, 3);
		}
		case(4):
		{
			hanoi4(n, 1, 3);
		}
		case(5):
		{
			hanoi5(n);
		}
		}
	}

}
