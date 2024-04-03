#define _CRT_SECURE_NO_WARNINGS

#include<string>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* f = fopen("in.txt", "r");

    int count = 0;
    char c = ' ';

    while (!feof(f))
    {
        fscanf(f, "%c", &c);

        if (c == '.' || c == ';' || c == '!' || c == '?')
        {
            count++;
        }
    }

    fclose(f);
    f = fopen("in.txt", "r");

    std::string* str{ new std::string[count] {} };
    int* n{ new int[count] {} };

    int k = 0;
    std::string s = "";

    while (!feof(f))
    {
        fscanf(f, "%c", &c);

        s= s + c;

        if (c == ' ')
        {
            n[k]++;
        }

        if (c == '.' || c == ';' || c == '!' || c == '?')
        {
            str[k] = s;
            k++;
            s = "";
        }
    }

    fclose(f);

    int m = 0;

    for (int i = 0; i < count; ++i)
    {
        if (n[i] > m) 
        {
            m = n[i];
        }
    }

    for (int i = 0; i < count; ++i)
    {
        if (n[i] == m)
        {
            m = i;
            break;
        }
    }

    f = fopen("out.txt", "w");

    s = "";
    s = str[m];

    for (int i = 0; i < str[m].length(); ++i)
    {
        fprintf(f, "%c", s[i]);
    }

    fclose(f);

    delete[] n;
    delete[] str;
}