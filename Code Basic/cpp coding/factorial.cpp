#include <iostream>
using namespace std;
long long int factorial(int i)
{
    if (i < 1)
    {
        return 1;
    }
    else
    {
        return i*factorial(i-1);
    }
}
int main()
{
    int i = 4;
    printf("factorial of %d : %lli", i, factorial(i));
    return 0;
}


