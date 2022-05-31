#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int point,qualifyPoint,marchLeft;
		cin>>point;
		cin>>qualifyPoint;
		cin>>marchLeft;
		int requiredPoint = qualifyPoint - point;
		int max = point + marchLeft * 2;
		if(max >= qualifyPoint){
			cout<< "yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}

	}
}