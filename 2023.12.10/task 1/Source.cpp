#include<iostream>
#include<fstream>

int main(int argc, char* argv[])
{
	
	std::ifstream f;
	f.open("in.txt");

	std::ofstream fout;
	fout.open("out.txt");
	
	char ch = ' ';
	int sum = 0;

	while (f.get(ch))
	{
		if (ch == ' ')
		{
			sum++;
		}
	}

	fout << std::endl << "cout of words: " << sum + 1;

	f.close();
	fout.close();

}