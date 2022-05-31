//will count the number in an array
//input
// size of input array : 10
// 4 54 32 11 4 4 32 22 11 11
// size of query: 4
// 11
// 4
// 32
// 22

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int hashing[N]; //by default every value is 0
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i =0 ; i< n ; ++i){
		cin >> arr[i];
		hashing[arr[i]]++; //this is our hash array
        // hash array count of index in array
        //that reduce complexity
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>> n;
		cout<< hashing[n] << endl; //this code is big O(n) not O(N*t)
	}
}