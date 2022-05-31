#include <iostream>
using namespace std;
int N = 1e5;
int main() {
     int t;
     cin>>t;
     while(t--){
     	int totalPlayer,GiHun_Ali_Height;
     	int count = 0;
     	cin>>totalPlayer;
     	cin>>GiHun_Ali_Height;
     	int arr[N];
     	for(int i = 0 ; i < totalPlayer ; ++i){
     		cin>> arr[i];
     		if(arr[i] > GiHun_Ali_Height){
     			count++;
     		}
     	}
     	cout<<count<<endl;

     	}
     
          
}
