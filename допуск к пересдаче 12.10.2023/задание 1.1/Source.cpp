#include<iostream>

int main(int argc, int argv[])
{
    int n = 0;
    std::cin >> n;

    int s = 0;

    for (int i = 0; i <= 31; ++i)
    {
        s += (n >> i) & 1;
    }
    std::cout << s;

    return 0;

}
