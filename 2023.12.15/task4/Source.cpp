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

int ststr(char* str1, char* sub)
{

	int k = -1;

	for (int i = 0; i < strlen(str1) - strlen(sub)-2; ++i)
	{
		k = i;

		for (int j = 0; j < strlen(sub); ++j)
		{
			
			if (str1[i + j] != sub[j])
			{
				k = -1;
			}
		}

		if (k != -1)
		{
			return k;
		}

	}
	return k;
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

	fprintf(f, "%d", ststr(a, b));

	fclose(f);

	

	return 0;
}