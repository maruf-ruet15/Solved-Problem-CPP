#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int N = 1e5;
	cin>>t;
	while(t--){
		int start,end;
		int i,j,count=0;
		int array[N];
		cin>>start;
		cin>>end;
		// int arr_size =start-end+1;
		
		for(i =start;i<=end;++i){
			array[i] = i;
			int lastDigit = array[i] % 10;
			if((lastDigit == 2)|| (lastDigit == 3 ) || (lastDigit == 9 )){
				count++;
			}
		}
		
		cout<<count<<endl;
	}

}