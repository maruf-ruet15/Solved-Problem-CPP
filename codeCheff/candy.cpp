#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int byte_num,candyLength,lengthToEat;
		cin>>candyLength;
		cin>>lengthToEat;
		byte_num = candyLength % lengthToEat;
		if(byte_num == 0){
			cout<<candyLength / lengthToEat<<endl;
		}else{
			cout<<"-1"<<endl;
		}

	}
}