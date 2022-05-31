// 11function
#include<bits/stdc++.h>
using namespace std;
// void show(){
// 	cout<<"sum of two numbers : ";
// }
// int sum(int a,int b){
// 	int sum;
// 	sum = a + b ;
// 	return sum;
// }
// int main(){
// 	show();
// 	int sum1 = sum(3.4);
// 	// cout<<sum(3,3);
// 	cout<<sum1;
// }

//============================================


// int last_digit(int m){
// 	int last_digit = m % 10;
// 	return last_digit;
// } 
// int digit_sum(int m){
// 	int digit_sum = 0;
// 	while(m){
// 		digit_sum += last_digit(m);
// 		m = m/10;
// 	}
// 	return digit_sum;
// }
// int main(){
	
	
// 	// cout<<digit_sum;
// 	int a,b;
// 	cin>> a >> b;
// 	last_digit(a);
// 	last_digit(b);
// 	cout<<"digit_sum of a : "<<digit_sum(a)<<endl;
// 	cout<<"digit_sum of b : "<<digit_sum(b)<<endl;
// 	cout<<"digit_sum a + digit_sum b : "<<digit_sum(a) + digit_sum(b)<<endl;

// }


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// call by reference v/s call by value
// that can be alternative of pointer
// if we use &n in function then call by reference will call.and  out value will be updated outside the function
void incerement(int &n, int b){
	n = n + 1 ;
	b = b + 1 ;
	
}
void swapping(int &a,int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void strings_(string &s){
	s = " s changed";
}	
int main(){
	int m = 3;
	int n = 5;
	string str = "maruf";
	// cout<<a<<" "<<b<<endl;
	// incerement(a,b);
	// cout<<a<<" "<<b<<endl;
	// incerement(a,b);
	// cout<<a<<" "<<b<<endl;

	//swap
	cout<<"before swap : " << m<<" "<< n <<endl;
	swapping(m,n);
	cout<<"after swap : " << m<<" "<< n <<endl;

	//string pass
	strings_(str);
	cout<<str<<endl;

	//but array by default pass by reference
	funcArr(){
		
	}

}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

