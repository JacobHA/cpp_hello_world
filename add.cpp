#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int r;
    // r = a + b;
    return a + b;
}

int main()
{
    std::cout << "This simple C++ program adds two input integers." << endl;
    std::cout << "Enter first integer: ";
    int a;
    std::cin >> a;
    int b;
    std::cout << "Enter second integer: ";
    std::cin >> b;

    int z;
    z = addition(a,b);
    std::cout << "The result of adding " << a << " and " << b << " is " << z << ".";

    return 0;
}