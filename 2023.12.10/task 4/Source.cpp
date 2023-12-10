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

	std::string mains = "";

	while (f.get(ch))
	{
		mains = mains + ch;
	}
	
	std::string sub = "";
	std::cin >> sub;

	int l = 0;

	for (int i = 0; i < mains.length() - sub.length() + 1; ++i)
	{
		for (int j = 0; j < sub.length(); ++j)
		{
			if (mains[i + j] == sub[j])
			{
				l++;
				if (l == sub.length())
				{
					fout << "sub index: " << i << std::endl;
					l = 0;
				}
			}
		}
	}

	f.close();
	fout.close();

}
