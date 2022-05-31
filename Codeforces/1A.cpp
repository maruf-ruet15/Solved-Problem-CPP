// A. Theatre Square
// Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

// What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
#include <iostream>
using namespace std;
// int main(){
//     int m,n,a,recta,squa;
//     scanf("%d %d %d",&m,&n,&a);
//     recta = m*n;
//     squa = a*a;
//     int num = recta/squa;
//     int frac = recta%squa;
//     return 0;

// }
int main()
{
    long long int m, n, a, div1, div2;
    scanf("%lli %lli %lli", &m, &n, &a);
    if (m % a == 0)
    {
        div1 = m / a;
    }
    else if (m % a != 0)
    {
        div1 = m / a + 1;
    }
    if (n % a == 0)
    {
        div2 = n / a;
    }
    else if (n % a != 0)
    {
        div2 = n / a + 1;
    }
    printf("%lli", div1 * div2);
}