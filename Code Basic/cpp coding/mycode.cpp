#include <iostream>
using namespace std;
void fun(int arr[])
{
    std::cout << "Size of array is : " << sizeof(arr) << std::endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    fun(arr);
    return 0
}