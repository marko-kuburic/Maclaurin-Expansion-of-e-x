#include <iostream>

using namespace std;

// returns x to the power of n (x^n)
int pow(int x, int n)
{
    return (n == 1) ? x : x * pow(x, n-1);
}

// returns factorial of n (n!)
int factorial(int n)
{
    return (n == 1) ? 1 : n * factorial(n-1);
}

// returns e to the power of x by expansion to the n-th element
int mExpansion(int x, int n)
{
    return (n == 0) ? 1 : pow(x, n) / factorial(n) + mExpansion(x, n-1);
}
