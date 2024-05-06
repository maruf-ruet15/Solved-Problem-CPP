#include <iostream>
using namespace std;

// Function to merge two sorted subarrays
void merge(int A[], int start, int mid, int end);

// Merge sort function
void merge_sort(int A[], int start, int end) {
    // Base case: if start < end, the array has more than one element
    if (start < end) {
        // Find the middle index
        int mid = (start + end) / 2;

        // Recursively sort the first half of the array
        merge_sort(A, start, mid);

        // Recursively sort the second half of the array
        merge_sort(A, mid + 1, end);

        // Merge the two sorted halves
        merge(A, start, mid, end);
    }
}

// Function to merge two sorted subarrays
void merge(int A[], int start, int mid, int end) {
    // Initialize pointers for the two halves of the array
    int p = start, q = mid + 1;

    // Temporary array to store merged elements
    int Arr[end - start + 1], k = 0;

    // Merge elements from the two halves into the temporary array
    for (int i = start; i <= end; i++) {
        if (p > mid)
            Arr[k++] = A[q++];
        else if (q > end)
            Arr[k++] = A[p++];
        else if (A[p] < A[q])
            Arr[k++] = A[p++];
        else
            Arr[k++] = A[q++];
    }

    // Copy the merged elements back into the original array
    for (int p = 0; p < k; p++) {
        A[start++] = Arr[p];
    }
}

// Main function
int main() {
    // Example array to be sorted
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call merge_sort to sort the array
    merge_sort(arr, 0, arr_size - 1);

    // Display the sorted array
    cout << "Sorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
