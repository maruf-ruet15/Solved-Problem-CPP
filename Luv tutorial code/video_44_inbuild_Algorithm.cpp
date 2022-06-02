#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i <n ; ++i){
		cin>>v[i];
	}
	int min = *min_element(v.begin(),v.end());
	cout<< "min = " << min <<endl;
	int max = *max_element(v.begin(),v.end());
	cout << "max = "<< max <<endl;
	int sum = accumulate(v.begin(),v.end(),0); //0 for initial value
	cout << "sum = "<< sum<<endl ;
	int ct = count(v.begin(),v.end(), 2);
	cout <<"count"<< ct << endl;
	auto it = find(v.begin(),v.end(),10);
	if(it != v.end()){
		cout << *it <<endl;
	}else{
		cout << "Elements not found"<<endl;
	}
	reverse(v.begin(),v.end());
	cout<< "reverse order = ";
	for(auto val : v){
		cout << val << " ";
	}
	cout << endl;

	string s = "jddfdfdfcfjoddajf";
	reverse(s.begin(),s.end());
	cout << s << endl;

	
	



}