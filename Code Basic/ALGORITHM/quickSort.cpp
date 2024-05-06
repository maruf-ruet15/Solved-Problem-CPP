#include <iostream>
using namespace std;

// Function to partition the array
int partition(int A[], int start, int end) {
    int i = start + 1; // Index to track elements less than the pivot
    int pivot = A[start]; // Pivot element, chosen as the first element

    // Loop through the array from start + 1 to end
    for (int j = start + 1; j <= end; j++) {
        // If the current element is less than the pivot, swap it with the element at index i
        if (A[j] < pivot) {
            swap(A[i], A[j]);
            i++; // Increment i to move to the next position
        }
    }

    // Swap the pivot element with the element at index i-1 to put it in its proper place
    swap(A[start], A[i - 1]);

    // Return the position of the pivot element
    return i - 1;
}

// Function to implement QuickSort algorithm
void quick_sort(int A[], int start, int end) {
    // Base case: If start is less than end, there are more than one elements in the array
    if (start < end) {
        // Partition the array and get the position of the pivot element
        int pivot_position = partition(A, start, end);

        // Recursively sort the left and right subarrays
        quick_sort(A, start, pivot_position - 1); // Sort the left side of the pivot
        quick_sort(A, pivot_position + 1, end); // Sort the right side of the pivot
    }
}

int main() {
    // Example array to be sorted
    int arr[] = {10, 7, 8, 9, 1, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call quick_sort to sort the array
    quick_sort(arr, 0, arr_size - 1);

    // Display the sorted array
    cout << "Sorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
