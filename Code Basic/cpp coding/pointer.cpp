#include <iostream>
using namespace std;
int main()
{

    int a[] = {12, 52, 123, 224, 5555}; // array initialization
    int *ptr;                  // pointer declaration
    ptr = &a;
    printf("the the values are\n");
    printf("___________________________\n");
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d ", *ptr);
        // ptr = ptr + 1; // incrementing the value of pointer
        // std::cout << "value of second element of an array : " << *ptr << std::endl;

        
    } 
    printf("\nthe address value are\n");
    printf("___________________________\n");
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d ", ptr);
        // ptr = ptr + 1; // incrementing the value of pointer
        // std::cout << "value of second element of an array : " << *ptr << std::endl;

        
    } // assigning base address of array to the pointer ptr
    // ptr = ptr + 1;             // incrementing the value of pointer
    // // std::cout << "value of second element of an array : " << *ptr << std::endl;
    
    return 0;
}