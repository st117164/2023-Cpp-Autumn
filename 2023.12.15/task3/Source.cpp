#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

char* substr(char* str1, int index, int len)
{

	char* str2{ new char[len+1] {} };
	int k = 0;

	for (int i = index; i < index + len; ++i)
	{
		str2[k] = str1[i];
		k++;

	}
	delete[] str2;

	return str2;
}

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");

	char a[255];
	fscanf(f, "%s", &a);

	int i = 0;
	fscanf(f, "%d", &i);

	int len = 0;
	fscanf(f, "%d", &len);

	fclose(f);


	f = fopen("out.txt", "w");

	fprintf(f, "%s", substr(a,i,len));

	fclose(f);


	return 0;
}