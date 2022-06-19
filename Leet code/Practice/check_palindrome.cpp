#include<bits/stdc++.h>
using namespace std;
class solution{
public:
	int x;
	bool isPalindrome(int x) {
 	long long int reverse=0;
 	long long int num = x;
     while(num > 0){
     	reverse = reverse * 10  + num % 10 ;
     	num = num / 10;
     }
    if( reverse != x){
    	return false;
    }else{
    	return true;
    }
}
};

int main(){
	solution s1;
	int X;
	cin >> X;
	s1.x = X;
	cout << s1.isPalindrome(s1.x);
}