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
    for (int i = 0; i < n; ++i)
    {
        
            if (b < *(a + i)) 
            {
                b = *(a + i);
            }
      
    }
    
    free(a);
    
    std::cout << b;

    return 0;

}
