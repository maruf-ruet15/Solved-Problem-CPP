#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,m,n;
	int count = 0;
	cin>>m;
	int arr[m];
	for(i = 0; i<m;++i){
		for(j =0; j<m;++j){
			if(arr[i]==arr[j]){
				count+=1;
			}
		}
	cout<<count;
	}
}	
