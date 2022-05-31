#include<bits/stdc++.h>
using namespace std;
void vectorPrint(vector<int> v){
	for(int i =0 ; i< v.size() ;++i){
		cout << v[i] << " ";
	}
}
int main(){
	// int testcase;
	// cin>>testcase;
	// while(testcase--){}
	//pair
// pair<int , float> name_of_pair;
// name_of_pair = make_pair(44,44.50);
//another  way
// name_of_pair = {44, 44.55}
// cout << name_of_pair.first << " " << name_of_pair.second<<endl;
// }
// pair<int, string> p;
// p = {2,"abcd"};
// pair<int ,string>&p1 = p; //copy pair(ans 2,abc), if call by ref then 3
// p1.first = 3;
// cout << p.first << " " << p.second << endl;


//=================
 // int a[] = {1,2,3};
 // int b[] = {10,20,30};
 //if given a[1] is related to b[1] ....and so on
 // pair<int,int> p_array[3];
 // p_array[0] = {1,10};
 // p_array[1] = {2,20};
 // p_array[2] = {3,30};
 // swap(p_array[0], p_array[3]);
 // for(int i = 0 ; i < 3 ; i++ ){
 // 	cout << p_array[i].first << " "<<p_array[i].second <<endl;
 // }

//===============
// pair<int,int>q;
// cin>>q.first;
// cin>>q.second;

//================VECTOR==============
	vector<int>v;
	int n;
	cin>>n;
	// for(int i = 0 ; i < n ; i++){
	// 	int x;
	// 	cin >> x;
	// 	v.push_back(x); //O(1)
	// }
	// v.push_back(444); //add after input
	//v.pop_back() //will delete the last one
	// vectorPrint(v);

	//vector<int>v2 = v  //copy of v ;O(n)! so we will try to use call by reference sothat actual vector pass not it's copy
	 


}







































	
