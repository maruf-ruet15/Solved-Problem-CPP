#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
long long fact[N];
int main(){
	fact[0] = fact[1] = 1; //predefined valiue
	for(int i =2 ; i< N ; ++i){
		fact[i] = fact[i-1] * i; //here we computed all value's factorials

	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>> n;
		cout<<"factorial of "<< n <<":";
		cout<< fact[n] << endl; //this code is big O(n) not O(N*t)
	}

}