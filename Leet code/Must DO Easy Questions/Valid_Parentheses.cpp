#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count_one = 0;
    int count_two = 0;
    int count_three = 0;
    for(int i = 0 ; i <= s.size();++i){
        if(s[i] == '('){
            count_one++;
        }else if(s[i] == ')'){
            count_one--;
        }else if(s[i] == '{'){
            count_two++;
        }else if(s[i] == '}'){
            count_two--;
        }else if(s[i] == '['){
            count_three++;
        }else if(s[i] == ']'){
            count_three--;
        }    
    }
    if((count_one == 0) && (count_two == 0) && (count_three == 0)){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }
}