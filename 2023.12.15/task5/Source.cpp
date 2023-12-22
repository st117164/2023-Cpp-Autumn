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

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");

	char a[255];
	fscanf(f, "%s", &a);

	char b[255];
	fscanf(f, "%s", &b);

	fclose(f);

	f = fopen("out.txt", "w");

	fprintf(f, "%d", strcmp(a, b));

	fclose(f);

	return 0;
}