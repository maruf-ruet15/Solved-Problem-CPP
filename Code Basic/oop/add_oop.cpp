#include<bits/stdc++.h>
using namespace std;
class calculator {
   int number1;
   int number2;
   char symbol;
   
   public :
   void add() {
      cout<<"The sum is "<<number1 + number2 ;
   }
   void subtract() {
      cout<<"The subtraction is "<<number1 - number2 ;
   }
   void multiply() {
      cout<<"The multiplication is "<<number1 * number2 ;
   }
   void divide() {
      cout<<"The division is "<<number1 / number2 ;
   }
   void calculator (int a , int b , char sym) {
      number1 = a;
      number2 = b;
      symbol = sym;
      switch(symbol){
         case '+' : add();
            break;
         case '-' : subtract();
            break;
         case '*' : multiply();
            break;
         case '/' : divide();
            break;
         default : cout<<"Wrong operator";
      }
   }
};
int main() {
   calculator c1(12 , 3 , '+');
}