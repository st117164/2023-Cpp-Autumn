#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

	FILE* f = fopen("in.txt", "r");

	char c = ' ';
	std::string s="";

	while (!feof(f))
	{
		fscanf(f, "%c", &c);

		if (c == '.')
		{
			break;
		}

		s = s + c;
	}
	fclose(f);

	if (s.length() % 2 == 1)
	{
		int ind = s.length() / 2;

		for (int i = 0; i <= ind; ++i)
		{
			if (s[ind - i] != s[ind + i])
			{
				f = fopen("out.txt", "w");
				fprintf(f, "%s", "eto ne palindrom");
				fclose(f);

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
				f = fopen("out.txt", "w");
				fprintf(f, "%s", "eto ne palindrom");
				fclose(f);

				return 0;
			}
		}
	}

	f = fopen("out.txt", "w");
	fprintf(f, "%s", "eto palindrom");
	fclose(f);

	return 0;

}