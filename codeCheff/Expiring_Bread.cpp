#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
          int TotalBread,ExpireDate,CanEanAday;
          cin>>TotalBread;
          cin>>ExpireDate;
          cin>>CanEanAday;
          if(TotalBread > ExpireDate * CanEanAday){
               cout<<"no"<<endl;
          }else{
               cout<<"yes"<<endl;
          }

     }
}
