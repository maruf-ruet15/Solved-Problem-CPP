#include<bits/stdc++.h>
using namespace std;
int main(){
	// int a;
	// scanf("%d",&a);
	// printf("%d",a);
	
	// string str = "maruf";
	// string str2 = "maruf";
	// if(str == str2){
	// 	cout<<"matched";
	// }else{
	// 	cout<<"not matched";
	// }
	// cout<<str[3];
	// str[0] = 'F';
	// cout<<str;
	// cout<<str.size();
	//**************************************
	// string str1,str2,stradd;
	// cin>>str1>>str2;
	// stradd  =str1+str2 ;
	// cout<<stradd<<endl                                                                    ;
	// cout<<str2;
	//*************************************
	// string str;
	// getline(cin,str);
	// cout<<str; //getline function take input with space (as it is in input)
	//**************************************
	// string str;
	// int n;
	// cin>>n;
	// //to ignore the \n after int we use cin.ignore()
	// cin.ignore();
	// while(n--){
	// 	// getline(cin,str);
	// 	// cin>>str; //this will count space as each string
	// 	cout<<str<<endl;
	// }
	//this will print one string because getline will start after 2 means-"space after 2"
	//**************************************


	//**************************************
	//reverse string
	// string str;
	// cin>>str;
	// string reverse_str;
	// for(int i =str.size()-1; i>=0;--i){
	// 	// reverse_str = reverse_str + str[i]; //this will incerease time complexity for adding char at last (slution push_back())
	// 	reverse_str.push_back(str[i]);
	// }
	// cout<<reverse_str<<endl;
	// if(str == reverse_str){
	// 	cout<<"palindrome";
	// }else{
	// 	cout<<"not palindrome";
	// }	
	//***************
	// string str;
	// char temp;
	// int i,j;
	// cin>>str;
	// for(i=0,j=str.size()-1;i<str.size()/2;i++,j--){
	// 	temp = str[i];
	// 	str[i] = str[j];
	// 	str[j] = temp;
	// }
	// cout<<str<<endl;
	//********************************
	//deal with large number
	//if number is greater than number range value then we convert it into integer by deleting its ascii value with '0's ascii value
	string str;
	cin>>str;
	int last_digit = int(str[str.size()-1])-'0';
	cout<<last_digit;
	

}