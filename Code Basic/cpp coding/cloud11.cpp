#include<bits/stdc++.h>
int main() {

printf("%d", 10?0?5:1:12);

}


// This can be evaluated as 10?(0?5:1):12). This is executed from left to right
// 10 -> true so execute -> 0?5:1
// 0-> false so 1