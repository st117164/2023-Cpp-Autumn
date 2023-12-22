#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>

int strcmp1(std::string str1, std::string str2)
{

	if (str1.length() < str2.length())
	{
		for (int i = 0; i < str1.length(); ++i)
		{
			if (str1[i] > str2[i])
			{
				return -1;
			}

			if (str1[i] < str2[i])
			{
				return 1;
			}
		}
		return 3;
	}

	if (str1.length() > str2.length())
	{
		for (int i = 0; i < str2.length(); ++i)
		{
			if (str1[i] > str2[i])
			{
				return -1;
			}

			if (str1[i] < str2[i])
			{
				return 1;
			}
		}
		return 3;
	}

	return 0;

}

int main()
{
	std::string* s{ new std::string[5] {} };

	s[0] = "hehehe";
	s[1] = "hehehe";
	s[2] = "hehehe";
	s[3] = "hehehe";
	s[4] = "hehehe";

	std::cout << strcmp1("he", "hehe");
	
}