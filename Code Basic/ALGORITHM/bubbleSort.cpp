#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubble_sort(int A[], int n) {
    int temp;

    // Outer loop to traverse the entire array
    for (int k = 0; k < n - 1; k++) {
        // Inner loop for pairwise comparisons and swapping
        // (n - k - 1) is for ignoring comparisons of elements which have already been compared in earlier iterations
        for (int i = 0; i < n - k - 1; i++) {
            // If the current element is greater than the next element, swap them
            if (A[i] > A[i + 1]) {
                // Swap
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}

int main() {
    // Example array to be sorted
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call bubble_sort to sort the array
    bubble_sort(arr, arr_size);

    // Display the sorted array
    cout << "Sorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
