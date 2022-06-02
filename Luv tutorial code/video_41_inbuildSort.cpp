#include<bits/stdc++.h>
using namespace std;
int main(){
	// int n;
	// cin >> n;
	// int arr[n];
	// for(int i = 0 ; i < n ; ++i){
	// 	cin >> arr[i];
	// }
	// // to use inbuild sort => sort(starting_element , next_of_ending_element)
	// sort(arr,arr+n); //arr[0] -> "arr" are same // here use intosort(combination of 3 sort algorithm)
	// for(int i = 0 ; i < n ; ++i){
	// 	cout << arr[i] <<" ";
	// }


	               //for vector
	int n;
	cin >> n;
	vector<int> v(n);     //*******
	for(int i = 0 ; i < n ; ++i){
		cin >> v[i];
	}
	// to use inbuild sort => sort(starting_element , next_of_ending_element)
	sort(v.begin()+2,v.end()); //arr[0] -> "arr" are same // here use intosort(combination of 3 sort algorithm)
	for(int i = 0 ; i < n ; ++i){
		cout << v[i] <<" ";
	}
}