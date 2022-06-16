#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
	cout <<" size : " <<m.size() <<endl;
	  //range
	for(auto &value : m){
		cout <<value.first << " "<< value.second;
		cout << endl;
	}
}
int main(){
	map<int,string> m;
	          //map store item in ordered way and it is ordered list
	// m[2] = "maruf";  //O(log(n)
	// m[10] = "Lishan";
	// m[8] = "zzzzz";
	// m.insert({4,"Hedaet"});


	m[6];   //if no string is inserted then it will declare without string with O(logn)
	// m.insert({3,"maruf"});    //m.size() * O(logn)
	//this complexity depend on the size of strung because map always compare with other input.
	// so the length of the string matter in complexity analysis 
	print(m);

	                  //with iterator
	   //------------------------------------------
	// map<int ,string> :: iterator it;
	// for(it = m.begin(); it != m.end() ; ++it){
	// 	cout <<(*it).first << " "<< (*it).second;
	// 	cout << endl;
	// }

	// m.clear();      //will clear the map //O(log(n)

                        //with auto
         //----------------------------------------
	// auto it = m.find(1); //find() return a iterator for key 1
	// if(it != m.end()){
	// 	m.erase(it);   //this will delete it pointer value  //O(log(n)
	// }
		// if(it == m.end()){
	// 	cout << "no value";
	// }else{
	// 	cout << it->first << " " <<it -> second;
	// }
	 


	 // problem : Given N strings , print unique strings in lexographical order with frequency
	map<string,int> c;
	int n ;
	cin >> n;
	for(int i = 0 ; i <n ; ++i){
		string s;
		cin >> s;
		c[s]++;    //this will insert s in pair.first and will insert 0 at pair.second 
		           //and increment it if repeated 
	}
	for(auto &value : c){
		cout<< value.first << " " << value.second << endl;
	}
} 