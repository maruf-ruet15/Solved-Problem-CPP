//2d array
// segmentation fault: if the size of array is more than 2e7 in global and 1e5 in local then it happen
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,m,n;
	cin>>m>>n;
	int arr[m][n];
	for(i = 0; i<m;++i){
		for(j=0;j<n;++j){
			cin>>arr[i][j];
		}
	}
	for(i = 0; i<m;++i){
		for(j=0;j<n;++j){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}