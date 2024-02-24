#include <stdio.h>

int findLargest(int arr[], int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, size);
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}

int findLargest(int arr[], int size) {
    // Base case: If the array has only one element, return that element.
    if (size == 1) {
        return arr[0];
    } else {
        // Recursive case: Find the largest element in the smaller subarray.
        int subArrayLargest = findLargest(arr, size - 1);
        
        // Compare the largest element in the subarray with the current element.
        if (arr[size - 1] > subArrayLargest) {
            return arr[size - 1];
        } else {
            return subArrayLargest;
        }
    }
}   
