#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
long long fact[N];
int main(){
	// vector<int> v;
	// int n;
	// cin>>n;
	// for(int i =0 ; i < n ; ++i){
	// 	int x;
	// 	cin>> x;
	// 	v.push_back(x);
	// } 

	// for(int i =0 ; i < v.size() ; ++i){
	// 	cout<<v[i] <<endl;
	// }

	       //now we will try this with iterator
	// vector<int> :: iterator it = v.begin();


	//cout << *it<<endl; //output 4
	//cout << (*(it+1)) << endl; //output 3
	//v.end() == it basically point a vector after the last element

	// for(it = v.begin() ; it != v.end() ; ++it){
	// 	cout << *it<<endl;
	// }

	    //==============vector with pairs=================
 	vector<pair<int , int>> v_p = {{11,33},{22,44},{50,100}};
 	vector<pair<int , int>> :: iterator it;
 	for(it = v_p.begin() ; it != v_p.end() ; ++it){
 		cout<< (*it).first <<" "<< it -> second << endl; 
 	}




}