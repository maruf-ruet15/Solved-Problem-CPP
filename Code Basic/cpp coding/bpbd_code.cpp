#include<stdio.h> 

int main() 
{ 
    int i = 1, j = 1, k = 1; 
    // printf("%d", i++ || ++j && ++k);
    //here left side will check only so j and k will not change its value j =1, k= 1
    printf("%d", i++);
    printf("%d%d%d", i, j, k);
    return 0;
}