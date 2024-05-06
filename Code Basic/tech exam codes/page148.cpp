#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k;

// Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Print hyphens
        for (int h = 1 ; h <= 5 - i ; h++) {
            cout << " ";
        }



        // Print stars
        for (k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
