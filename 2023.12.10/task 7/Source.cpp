#include<iostream>
#include<fstream>
#include<string>

int main(int argc, char* argv[])
{
	std::ifstream f;
	f.open("in.txt");

	std::ofstream fout;
	fout.open("out.txt");

	char ch = ' ';

	std::string s = "";

	while (f.get(ch))
	{
		s = s + ch;
	}

	int n = 0;
	std::cin >> n;

	std::string d = "";
	d = s;

	for (int i = 0; i < n-1; ++i)
	{
		s = s + d;
	}

	fout << s;

	f.close();
	fout.close();

}