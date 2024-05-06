#include <iostream>
using namespace std;

// Function to perform selection sort
void selection_sort(int A[], int n) {
    // Temporary variable to store the position of minimum element
    int minimum;

    // Loop to iterate through the array
    // Reduces the effective size of the array by one in each iteration
    for (int i = 0; i < n - 1; i++) {
        // Assuming the first element to be the minimum of the unsorted array
        minimum = i;

        // Loop to find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[minimum]) {
                // If the current element is smaller than the minimum found so far, update the minimum
                minimum = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        swap(A[minimum], A[i]);
    }
}

int main() {
    // Example array to be sorted
    int arr[] = {64, 25, 12, 22, 11};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call selection_sort to sort the array
    selection_sort(arr, arr_size);

    // Display the sorted array
    cout << "Sorted array is \n";
    for (
