#include<bits/stdc++.h>
using namespace std;
int main() {

	int i, j, k, n;
	// printf("Enter the number of lines: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		// Print spaces
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}

		// Print 0s and 1s alternatively
		for (k = 1; k <= 2 * i - 1; k++) {
			// printf("%d", (k + 1) % 2);
			cout << "*";
		}

		printf("\n");
	}

	//reverse star
	for (int i = n - 1; i >= 1; i--) {
		for (j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;



	//***********************
	// for (int i = 1; i <= n; i++) {
	// 	for (int j = 1 ; j <= i; j++) {

	// 		cout << "*" ;
	// 	}
	// 	cout << endl;
	// }
}
