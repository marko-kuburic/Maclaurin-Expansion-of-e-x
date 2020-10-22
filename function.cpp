#include <iostream>

using namespace std;

int pow(int x, int n)
{
    return (n == 1) ? x : x * pow(x, n-1);
}

int factorial(int n)
{
    return (n == 1) ? 1 : n * factorial(n-1);
}

int eAproximation(int x, int n)
{
    return (n == 0) ? 1 : pow(x, n) / factorial(n) + eAproximation(x, n-1);
}
