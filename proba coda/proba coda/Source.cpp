#include<iostream>
int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int A = 0;
    int B = 0;
    std::cin >> a;
    std::cin >> b;
    A = a / b;
    std::cout << A<<" ";
    B = b / a;
    std::cout << B << " ";
    std::cout << ((a * A) + (b * B)) / (A + B);
    return 0;
}