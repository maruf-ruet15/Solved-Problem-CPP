#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
long long fact[N];
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i =0 ; i < n ; ++i){
		int x;
		cin>> x;
		v.push_back(x);
	} 

	// for(int i =0 ; i < v.size() ; ++i){
	// 	cout<<v[i] <<endl;
	// }

	       //now we will try this with iterator with auto
	        //auto keyward autometically see the type of container data type

	// for(auto it = v.begin() ; it != v.end() ; ++it){
	// 	cout << *it << " ";
	// }
	// cout<< endl;

	                       //range based loop ; here iterate by taking value one by one
	               // for(data_type_of_vector value : vector_name)
	for(int &value : v){
		value++;
		// cout<< value << " " ;
	}
	for(int  value : v){
		cout<< value  << " " ;
	}
	cout <<endl;


	    //==============vector with pairs=================
 	vector<pair<int , int>> v_p = {{11,33},{22,44},{50,100}};
 	for(pair<int, int> &value : v_p){
 		cout<< value.first <<" "<< value.second << endl; 
 	}
   cout<<"showing pair with auto"<<endl;
 	for(auto &value : v_p){
 		cout<< value.first <<" "<< value.second << endl; 
 	}



}