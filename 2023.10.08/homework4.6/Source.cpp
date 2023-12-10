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

    int b = 0;
    b = *a;

    int l = 0;
    l = *a;

    for (int i = 0; i < n; ++i)
    {
        if (b < *(a + i))
        {
            b = *(a + i);
        }

        if (l > *(a + i))
        {
            l = *(a + i);
        }

    }

    for (int i = 0; i < n; ++i)
    {
      
        if (l == *(a + i))
        {
            l = i;
            break;
        }

    }
    
    for (int i = n - 1; i >= 0; --i)
    {

        if (b == *(a + i))
        {
            b = i;
            break;
        }

    }

    int z = 0;
    z = *(a + b);

    int m = 0;
    m = *(a + l);

    *(a + l) = z;
    *(a + b) = m;

    for (int i = 0; i < n; ++i)
    {
        std::cout << *(a + i)<<" ";
    }

    free(a);

    return 0;

}
