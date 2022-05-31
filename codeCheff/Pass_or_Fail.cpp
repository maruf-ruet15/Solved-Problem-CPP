#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,correct,passMark;
		cin>>n;
		cin>>correct;
		cin>>passMark;
		int wrongAnswer = n - correct;
		int total = correct * 3 + wrongAnswer* (-1);
		// cout<<total;
		if(total>=passMark){
			cout<<"PASS"<<endl;
		}else{
			cout<<"FAIL"<<endl;
		}
	}
}