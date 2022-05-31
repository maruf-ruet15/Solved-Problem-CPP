#include <iostream>
using namespace std;

int main() {

     char a, b;
     cin>> a >> b;
     if( (a=='G') && (b=='G')){
          cout<<"G";
     }
     else if ( (a=='R') || (b=='R')){
          cout<<"R";
     }
     else
          cout<<"B";
         
     return 0;

}
