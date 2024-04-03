#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");

	char a[255];
	fscanf(f, "%s", &a);

	fclose(f);
	f = fopen("in.txt", "r");

	int count = 0;
	char c = ' ';

	int l = 0;

	while (l<255)
	{
		fscanf(f, "%c", &c);
		if (c == ' ')
		{
			count++;
		}
		++l;
	}

	fclose(f);
	f = fopen("in.txt", "r");

	std::string* s{ new std::string[count + 1] {} };
	std::string s1 = "";

	int k = 0;
	l = 0;

		while (l < 255)
		{
			fscanf(f, "%c", &c);
			
			if ((c != '.') && (c != ':') && (c != '!') && (c != '?') && (c != ' ') && (c!=','))
			{
				s1 = s1 + c;
			}
			
			if (c == ' ')
			{
				s[k] = s1;
				s1 = "";

				k++;
			}

			++l;
		}

	fclose(f);
	
	int* n{ new int[count + 1] {} };

	int d = 0;
	std::string s2 = "";

	for (int i = 0; i < count+1; ++i)
	{
		s2 = s[i];
		for (int j = 0; j < count + 1; ++j)
		{
			if (s2 == s[j])
			{
				d++;
			}
		}
		n[i] = d;
		d = 0;
	}

	for (int i = 0; i < count; ++i)
	{
		if (n[i] > n[i + 1])
		{
			std::swap(n[i], n[i + 1]);
		}
	}

	f = fopen("out.txt", "w");

	for (int i = 0; i < count + 1; ++i)
	{
		s2 = s[i];
		for (int j = 0; j < count + 1; ++j)
		{
			if (s2 == s[j])
			{
				d++;
			}
		}
		if (d == n[count])
		{
			std::string s3 = s[i];

			char* str{ new char[s[i].length() + 1] {}};

			for (int z = 0; z < s[i].length(); ++z)
			{
				str[z] = s3[z];
			} 

			fprintf(f, "%s", str);

			delete[] str;

			return 0;
		}

		d = 0;
	}

	delete[] n;
	delete[] s;
	fclose(f);

	return 0;
}