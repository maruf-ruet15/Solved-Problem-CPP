#include <bits/stdc++.h>
using namespace std;

int And(unsigned int a, unsigned int b) {
    int p = a & b;
    return p;
}
int Or(unsigned int a, unsigned int b) {
    int p = a | b;
    return p;
}
int Xor(unsigned int a, unsigned int b) {
    int p = a ^ b;
    return p;
}

int Lshift(int a) {
    int p = a << 1;
    return p;
}


int main() {
    // unsigned int a = 5;
    // unsigned int b = 6;
    // int c = 0;
    // c = a & b;
    // c = c | b;
    // c = c ^ a;
    // c = c << 1;
    // cout << "value of c is : " << c << endl;
    cout << "or : " << Or(5, 6) << endl;
    cout << "and : " << And(5, 6) << endl;
    cout << "Xor : " << Xor(5, 6) << endl;
    cout << "left shift: " << Lshift(5) << endl;



}