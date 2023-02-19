#include<stdio.h> 
int main(){

int i=1; 
for (i=0;i=-1;i=1) 
{ 
	printf("%d ", i); 

	if (i!=1)
 break;
}



return 0;
}


// First, the variable i is initialized to 1.

// Then, the for loop condition is i=-1, which assigns the value -1 to i and also evaluates to -1. This means that the loop will continue as long as the condition is true.

// Inside the loop, the value of i is printed, which will be -1 in the first iteration.

// Then, the condition if (i!=1) break; is evaluated. Since i is equal to -1, which is not equal to 1, the loop will exit and the program will end.

// Therefore, the output of the program will be: -1