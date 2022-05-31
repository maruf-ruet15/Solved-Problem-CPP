#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >>a >>b;
        int initialP_A = 500;
        int initialP_B = 1000;
        int finalA1 = initialP_A - a * 2;
        int finalB1 = initialP_B - (a+b) * 4;
        int total1 = finalA1 + finalB1 ;
        int finalB2 = initialP_B - b * 4;
        int finalA2 = initialP_A - (a+b) * 2;
        
        int total2 = finalA2 + finalB2 ;
        int difference = total1 - total2;
        if(difference>0){
            cout<<total1<<endl;
        }else{
            cout<<total2<<endl;
        }
        
    }
}