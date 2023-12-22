#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int strlen(char* str)
{

	int size = 0;

	while (*str++)
	{
		++size;
	}

	return size;

}

int strcmp(char* str1, char* str2)
{
	if (strlen(str1) < strlen(str2))
	{
		for (int i = 0; i < strlen(str1); ++i)
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


	}

	if (strlen(str1) >= strlen(str2))
	{
		for (int i = 0; i < strlen(str2); ++i)
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
	}

	return 0;

}

char* strmul(char* str1, int index)
{
	int len = strlen(str1);

	int len2 = 0;
	len2 = len * index + 1;

	char* str2{ new char[len2] {0} };

	int k = 0;

	for (int j = 0; j < index; ++j) 
	{
		for (int i = 0; i < len; ++i)
			{	
				str2[k] = str1[i];
				k++;
			}
	}
	return str2;
}

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");

	char a[255];
	fscanf(f, "%s", &a);

	int i = 0;
	fscanf(f, "%d", &i);

	fclose(f);

	f = fopen("out.txt", "w");

	fprintf(f, "%s", strmul(a, i));

	fclose(f);

	return 0;
}