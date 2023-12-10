#include<iostream>
#include<fstream>


int main(int argc, char* argv[])
{

	std::ifstream f;
	f.open("in.txt");

	char ch;
	int sum = 0;

	while (f.get(ch))
	{
		if (ch == '.')
		{
			sum++;
		}

	}
	f.close();

	f.open("in.txt");
	int *sent { new int[sum] };

	int sumOfSimvols = 0;

	int l = 0;
	while (f.get(ch))
	{
		if (ch == '.')
		{
			sent[l] = sumOfSimvols;

			sumOfSimvols = 0;
			l++;
		}

		sumOfSimvols++;
	}

	f.close();
	f.open("in.txt");

	int s = -1;

	for (int i = 0; i < sum; ++i)
	{
		if (sent[i] > s)
		{
			s = sent[i];
		}
	}

	int key = 0;

	for (int i = 0; i < sum; ++i)
	{
		if (sent[i] == s)
		{
			key = i;
		}
	}

	int forkey = 0;

	std::ofstream fout;
	fout.open("out.txt");

	while (f.get(ch))
	{
		if (forkey == key)
		{
			fout << ch;
		}
		
		if (ch == '.')
		{
			forkey++;
		}
	}

	f.close();
	fout.close();
}

