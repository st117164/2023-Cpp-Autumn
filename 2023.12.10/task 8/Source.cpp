#include <set>
#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>

int main(int argc, char* argv[])
{

	std::multiset <std::string> str;

	std::ifstream f;
	f.open("in.txt");

	std::ofstream fout;
	fout.open("out.txt");

	char ch = ' ';

	std::string s = "";

	int l = 0;
	while (f.get(ch))
	{
		if (ch != ' ') 
		{
			s = s + ch;
		}
		
		if (ch == ' ')
		{
			str.insert(s);
			s = "";
			l++;
		}
	}

	f.close();
	f.open("in.txt");

	std::pair<std::string, int>* massiv{ new std::pair<std::string, int>[l] };

	int k = 0;

	while (f.get(ch))
	{
		if (ch != ' ')
		{
			s = s + ch;
		}

		if (ch == ' ')
		{
			massiv[k].first = s;
			massiv[k].second = str.count(s);

			s = "";
			k++;
		}
	}

	int c = -1;
	for (int i = 0; i < l; ++ i)
	{
		if (massiv[i].second > c)
		{
			c = massiv[i].second;
		}
	}


	for (int i = 0; i < l; ++i)
	{
		if (massiv[i].second == c)
		{
			fout << massiv[i].first;
			return 0;
		}
	}

	f.close();
	fout.close();

}