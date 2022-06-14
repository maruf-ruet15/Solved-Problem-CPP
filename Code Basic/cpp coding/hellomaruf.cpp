#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string reverse_str;
    for(int i = str.size()-1 ; i >= 0 ; --i){
        reverse_str = reverse_str + str[i];
    }
    cout << reverse_str;
}