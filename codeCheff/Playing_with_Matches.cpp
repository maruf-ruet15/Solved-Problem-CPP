#include <iostream>
using namespace std;
int N = 1e5;
int main() {
     int t;
     cin>>t;
     while(t--){
          int a,b;
          cin>>a;
          cin>>b;
          int sum = a + b ;
          int count = 0;

          while(sum>0){
               
               int lastDigit = sum % 10;
               if(lastDigit == 0){
                    count = count + 6;
               }else if(lastDigit == 1){
                    count = count + 2;
               }else if(lastDigit == 2){
                    count = count + 5;
               }else if(lastDigit == 3){
                    count = count + 5;
               }else if(lastDigit == 4){
                    count = count + 4;
               }else if(lastDigit == 5){
                    count = count + 5;
               }else if(lastDigit == 6){
                    count = count + 6;
               }else if(lastDigit == 7){
                    count = count + 3;
               }else if(lastDigit == 8){
                    count = count + 7;
               }else if(lastDigit == 9){
                    count = count + 6;
               }

          sum = sum / 10;
          }
          cout<< count <<endl;

     }
     
          
}
