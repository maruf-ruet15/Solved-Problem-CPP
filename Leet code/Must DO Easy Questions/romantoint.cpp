// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
	
// 	while(t--){
	// 	string in;
	// 	cin>>in;
	// 	int sum = 0;
	// 	for(int i =0 ; i< in.length() ; i++){
	// 		if(in[i] =='I'){
	// 			in[i] = 1;}else if(in[i]=='V'){
	// 			in[i]= 5;}else if(in[i]=='X'){
	// 			in[i]= 10;}else if(in[i]=='L'){
	// 				in[i]=50;}else if(in[i]=='C'){
	// 					 in[i]=100;}
	// 					else if(in[i]=='D'){
	// 					 	in[i]=500;}
	// 					 	//else if(in[i]==1000){
	// 					// 		in[i]= 1000;}

	// 		sum = sum + in[i];
	// 	}
	// 	cout<<sum<<endl;
	// }
// }
	//====================SOLUTION========================

#include<bits/stdc++.h>
using namespace std;
int romanValue (char romanLetter) {
   if (romanLetter == 'I') {
       return 1;
   }
   if (romanLetter == 'V') {
       return 5;
   }
   if (romanLetter == 'X') {
       return 10;
   }
   if (romanLetter == 'L') {
       return 50;
   }
   if (romanLetter == 'C') {
       return 100;
   }
   if (romanLetter == 'D') {
       return 500;
   }
   if (romanLetter == 'M') {
       return 1000;
   }
}
int romanToInt(string s) {
   int ans = romanValue(s[0]);
   for (int i = 1; i < s.size(); i++) {
       if (romanValue(s[i]) > romanValue(s[i - 1])) {
           ans = ans - (2 * romanValue(s[i - 1])) + romanValue(s[i]);
       } else {
           ans += romanValue(s[i]);
       }
   }
   return ans;
}
int main(){
	int t;
	cin>>t;
	
	while(t--){
		string str;
		cin >> str ;
		cout<<romanToInt(str)<<endl;

	}
}
