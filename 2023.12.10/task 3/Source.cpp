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

	std::string s1 = "";
	std::string s2 = "";

	int l = 0;

	while (f.get(ch))
	{
		if (ch != ' ' && l ==0)
		{
			s1 = s1 + ch;
		} 

		if (ch == ' ')
		{
			l++;
		}

		if (ch != ' ' && l != 0)
		{
			s2 = s2 + ch;
		}
		
	}

	std::string s = "";
	s = s1 + s2;
	
	fout << s;

	f.close();
	fout.close();

}