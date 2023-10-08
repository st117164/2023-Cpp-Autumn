#include<iostream>

int main(int, char**)
{
    int n = 0;
    std::cin >> n;

    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    int l = 0;

    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) > 0) 
        {
            l++;
        }

    }

    int* c = (int*)malloc(sizeof(int) * n);

    int b = 0;

    for (int i = 0; i < n; ++i) 
    {
        if (*(a + i) > 0) 
        {
            *(c + b) = *(a + i);
            ++b;
        }
    }

    for (int i = 0; i < l; ++i) 
    {
        std::cout << *(c + i)<<" ";
    }

    free(a);
    free(c);

    return 0;

}
