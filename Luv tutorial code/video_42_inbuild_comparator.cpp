#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int , int >a , pair<int , int>b){
	if(a.first != b.first){
	if(a.first > b.first) return false; //false means we want to do this by inbuild
	    //here return false means we want to swap ;
	return true;
}else{
	if(a.second < b.second) return false;
	return true;
}
}

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> a(n);
	for(int i = 0 ; i <n ; ++i){
		cin>>a[i].first >>a[i].second;
	}
	sort(a.begin(),a.end(),cmp);
	for(int i = 0 ; i<n ; ++i){
		cout << a[i].first << " "<< a[i].second <<endl;
	}
	cout << endl;
}