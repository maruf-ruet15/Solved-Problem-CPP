#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a, b, c;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        int sum = a + b + c;

        if (sum >= 2)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
}