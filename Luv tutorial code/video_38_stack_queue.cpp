#include<bits/stdc++.h>
using namespace std;
   //stack
	void my_stack(stack<int> s){
		// stack<int> s;
	    s.push(11);
	    s.push(22);
	    s.push(33);
	    s.push(44);
	while(!s.empty()){
		cout << s.top() <<endl;
		s.pop();
	}
	}
	        //queue

	void my_queue(queue<string> q){

	q.push("maruf");
	q.push("hedaet");
	q.push("lishan");
	q.push("arafat");
	while(!q.empty()){
		cout << q.front() <<endl;
		q.pop();
	}
	}
int main(){
	stack<int> s;
	queue<string> q;
	cout << "=============== stack ==========="<<endl;
	my_stack(s);
	cout << "=============== queue ==========="<<endl;
	my_queue(q);


}