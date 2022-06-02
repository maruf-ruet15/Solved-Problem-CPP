#include<bits/stdc++.h>
using namespace std;
// void print(map<int,string> &m){
// 	cout <<" size : " <<m.size() <<endl;
// 	  //range
// 	for(auto &value : m){
// 		cout <<value.first << " "<< value.second;
// 		cout << endl;
// 	}
// }
int main(){
	// map<string , string> m;
	          //map store item in ordered way and it is ordered list
	// m[2] = "maruf";  //O(log(n)
	// m[10] = "Lishan";
	// m[8] = "arafat";
	// m.insert({4,"Hedaet"});
	// m[6];
	// m.insert({"name","maruf"});    //m.size() * O(logn)
	//this complexity depend on the size of strung because map always compare with other input.
	// so the length of the string matter in complexuty analysis 
	// print(m);
	// map<int ,string> :: iterator it;
	// for(it = m.begin(); it != m.end() ; ++it){
	// 	cout <<(*it).first << " "<< (*it).second;
	// 	cout << endl;
	// }

	// auto it = m.find(1); //find() return a iterator
	// if(it != m.end()){
	// 	m.erase(it); //O(log(n)
	// }
	// m.clear();  //O(log(n)
	// if(it == m.end()){
	// 	cout << "no value";
	// }else{
	// 	cout << it->first << " " <<it -> second;
	// }
	 


	 // problem : Given N strings , print unique strings in lexographical order with frequency
	// map<string,int> c;
	// int n ;
	// cin >> n;
	// for(int i = 0 ; i <n ; ++i){
	// 	string s;
	// 	cin >> s;
	// 	c[s]++; 
	// }
	// for(auto &value : c){
	// 	cout<< value.first << " " << value.second << endl;
	// }
                       //use of unordered map  O(1)! it use hashing not input comparison
	unordered_map<string,int> c;
	int n ;
	cin >> n;
	for(int i = 0 ; i <n ; ++i){
		string s;
		cin >> s;
		c[s]++; 
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout<<c[s]<<endl;

	}
	
} 