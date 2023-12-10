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
		if (ch != ' ' && l == 0)
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
	
	if (s1.length() < s2.length())
	{
		for (int i = 0; i < s1.length(); ++i)
		{
			if (s1[i] > s2[i])
			{
				fout << s1 << " " << ">" << " " << s2;
				return 0;
			}

			if (s2[i] > s1[i])
			{
				fout << s1 << " " << "<" << " " << s2;
				return 0;
			}
		
		}
		fout<< s1 << " " << "<" << " " << s2;
		return 0;
	}

	if (s1.length() > s2.length())
	{
		for (int i = 0; i < s2.length(); ++i)
		{
			if (s1[i] > s2[i])
			{
				fout << s1 << " " << ">" << " " << s2;
				return 0;
			}

			if (s2[i] > s1[i])
			{
				fout << s1 << " " << "<" << " " << s2;
				return 0;
			}

		}

		 fout << s1 << " " << ">" << " " << s2;
		 return 0;
	}

	if (s1.length() == s2.length())
	{
		for (int i = 0; i < s2.length(); ++i)
		{
			if (s1[i] > s2[i])
			{
				fout << s1 << " " << ">" << " " << s2;
				return 0;
			}

			if (s2[i] > s1[i])
			{
				fout << s1 << " " << "<" << " " << s2;
				return 0;
			}

		}

		fout << s1 << " " << "=" << " " << s2;
		return 0;
	}

	f.close();
	fout.close();

}