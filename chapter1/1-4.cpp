#include <iostream>

int main()
{
    int a = 3;
    int &b = a;

    b = 5;
    std::cout << a << b << std::endl;
}