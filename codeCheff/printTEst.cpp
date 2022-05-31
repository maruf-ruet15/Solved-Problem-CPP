#include<bits/stdc++.h>
using namespace std;
void func_(int n){
	if(n == 0)return;
	func_(n-1);
	cout<<n<<endl;
		
}

int main(){
	func_(5);
}