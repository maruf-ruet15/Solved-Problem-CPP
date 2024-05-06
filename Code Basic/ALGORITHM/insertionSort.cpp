#include <iostream>
using namespace std;

// Function to perform insertion sort
void insertion_sort(int A[], int n) {
    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        // Store the current element, which will be checked for its correct position
        int temp = A[i];
        int j = i;

        // Move elements of A[0..i-1], that are greater than temp, to one position ahead of their current position
        // This loop finds the correct position for the current element in the sorted subarray A[0..i-1]
        while (j > 0 && temp < A[j - 1]) {
            // Move the element to one position ahead
            A[j] = A[j - 1];
            j = j - 1;
        }

        // Move the current element to its correct position in the sorted subarray A[0..i-1]
        A[j] = temp;
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

    // Call insertion_sort to sort the array
    insertion_sort(arr, arr_size);

    // Display the sorted array
    cout << "Sorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
