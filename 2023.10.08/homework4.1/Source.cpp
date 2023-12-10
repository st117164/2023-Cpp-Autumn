#include<iostream>

int main(int, char**)
{
    int n = 0;
    std::cin >> n;

    int s = 0;

    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);

        if (*(a + i) > 0)
        {
            s++;
        }
    }

    free(a);

    std::cout << s;

    return 0;

}
