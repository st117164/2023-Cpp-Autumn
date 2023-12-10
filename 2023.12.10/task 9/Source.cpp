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
		s = s + ch;
	}

	if (s.length() % 2 == 1)
	{
		int ind = s.length() / 2;

		for (int i = 0; i <= ind; ++i)
		{
			if (s[ind - i] != s[ind + i])
			{
				fout << s << " - eto ne palindrom";
				return 0;
			}
		}
	}

	if (s.length() % 2 == 0)
	{
		for (int i = 0; i < s.length() / 2; ++i)
		{
			if (s[i] != s[s.length() - 1 - i])
			{
				fout << s << " - eto ne palindrom";
				return 0;
			}
		}
	}

	fout << s << " - eto palindrom";

	f.close();
	f.open("in.txt");

}