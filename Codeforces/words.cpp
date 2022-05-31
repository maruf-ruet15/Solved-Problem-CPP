#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    char arr[2000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", arr);
        int len = strlen(arr);
        // printf("%c",arr[0]);
        // Way Too Long Words
        if (len > 10)
            printf("%c%d%c\n", arr[0], len - 2, arr[len - 1]);
        else
            printf("%s\n", arr);
    }
}
