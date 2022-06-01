// input
// 3
// 3
// 44 33 44
// 2
// 33 456
// 5
// 11 22 33 44 55
#include<bits/stdc++.h>
using namespace std;
        // vector of pair
// void vectorPrint(vector< pair<int,int> > v){
// 	cout<<"size : "<< v.size()<<endl;
// 	for(int i =0 ; i< v.size() ;++i){
// 		cout << v[i].first << " "<<v[i].second<<endl;
//	}
//}
     //array of vector
// void vectorPrint(vector<int> &v){
// 	cout<<"size : "<< v.size()<<endl;
// 	for(int i =0 ; i< v.size() ;++i){
// 		cout << v[i]<<endl;
// 	}
// }

     //vector of vector
void vectorPrint(vector<int> &v){
	cout<<"size : "<< v.size()<<endl;
	for(int i =0 ; i< v.size() ;++i){
		cout << v[i]<<endl;
	}
}

int main(){
	         // vector of pair
	// vector< pair<int,int> > v;
	// vectorPrint(v);
 //    int n;
	// cin>>n;
	// for(int i = 0 ; i < n ; ++i){
	// 	int x,y;
	// 	cin>>x>>y;
	// 	v.push_back({x,y});
	// }
	// vectorPrint(v);
	// v.push_back({34,432});
	// vectorPrint(v);


	//array of vector's

	// vector<int> v[10]; //here 10 vecror has been created
    // int N;
    // cin>>N;
    // vector<int> v[N];
    // for(int i = 0 ; i < N ; ++i){
    // 	int n;
    // 	cin >> n;
    // 	for(int j = 0 ; j < n ; ++j){
    // 		int x;
    // 		cin>>x;
    // 		v[i].push_back(x);
    // 	}
    // }
    // for(int i = 0 ; i < N ; ++i ){
    //     vectorPrint(v[i]);
    // }
    // cout<<"v[0][1] = "<<v[0][1];  //means 1th no vector of v[0] array

    
    //++++++++++++++++vector of vector+++++++++++++++++++++
    // vector<vector<int>> v;
    // int N;
    // cin >> N;
    // for(int i = 0 ; i < N ; ++i){
    // 	int n;
    // 	cin >> n;
    // 	vector<int> temp;
    // 	for(int j = 0 ; j < n ; ++j){
    // 		int x;
    // 		cin>>x;
    // 		temp.push_back(x);
    // 	}
    // 	v.push_back(temp);
    // }
    // for (int i = 0; i < v.size(); ++i)
    // {
    // 	vectorPrint(v[i]);
    // }

    // cout<< v[0][1]; //means 1th No. vector value of a v[0] vector


//this can also be done if we insert an empty vecor before input of vecto is inserted
vector<vector<int>> v;
    int N;
    cin >> N;
    for(int i = 0 ; i < N ; ++i){
    	int n;
    	cin >> n;
    	v.push_back(vector<int> ());
    	for(int j = 0 ; j < n ; ++j){
    		int x;
    		cin>>x;
    		v[i].push_back(x);
    	}
    	
    }
    for (int i = 0; i < v.size(); ++i)
    {
    	vectorPrint(v[i]);
    }
}
	 
