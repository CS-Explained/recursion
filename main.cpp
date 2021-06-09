#include <iostream>
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    std::cout << fact(5) << std::endl;
    std::cout << fib(5) << std::endl;
    return 0;
}