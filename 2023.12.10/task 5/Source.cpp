#include<iostream>
#include<fstream>
#include<string>

int main(int argc, char* argv[])
{
	std::ifstream f;
	f.open("in.txt");

	std::ofstream fout;
	fout.open("out.txt");
	
	int i = 0;
	int len = 0;

	std::cin >> i >> len;

	char ch = ' ';

	std::string s = "";

	while (f.get(ch))
	{
		s = s + ch;
	}

	for (int j = i; j < len + i; ++j)
	{
		fout << s[j];
	}

	f.close();
	fout.close();

}