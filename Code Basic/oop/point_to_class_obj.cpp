#include <bits/stdc++.h>
using namespace std;
class Simple
{
    public:
    int a;
};

int main()
{
    Simple obj;
    Simple* ptr;   // Pointer of class type
    ptr = &obj;
    cout << ptr->a<<" "; 
    cout << obj.a;
     // Accessing member with pointer
}