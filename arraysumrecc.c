#include <stdio.h>

// Function to calculate the sum of elements in an array using recursion
int sumArray(int arr[], int n) {
    // Base case: If there are no elements (n is 0), the sum is 0.
    if (n == 0) {
        return 0;
    }
    
    // Recursive case: Add the current element to the sum of the rest of the elements.
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[50],n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
         scanf("%d",&arr[i]);
    }
    int result = sumArray(arr, n);
    printf("Sum of elements in the array: %d\n", result);
    
    return 0;
}
