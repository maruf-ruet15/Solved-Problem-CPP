// #include<bits/stdc++.h>
//  using namespace std;
//  int main()
// {
//     int a[1000],i,n;  
 
//      printf("Enter size of array: ");
//     scanf("%d",&n);
 
//      printf("Enter %d elements in the array : ", n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d", &a[i]);
//     }
 
//     printf("\nElements in array are: ");
//     for(i=0;i<n;i++)
 
//     {
//         printf("%d  ", a[i]);
//     }
 
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[1000],i,j,n;
    scanf("%d",&n);
    
    for( i =0;i<n;i++){
        scanf("%d",&a[i]);
        
    }  
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        
    }  
    printf("\n");
    for(i = 0, j = n-1; i<n/2; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(i=0;i<n; i++){
        printf("%d ",a[i]);
        
    }  
    return 0;
}