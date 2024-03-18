//Write a program to display the elements of an array containing 
//n integers in the reverse order using a pointer to the array.
#include <stdio.h>

int main() {
    int n;

    // Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Declare an array of n integers
    int arr[n];

    // Input values into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Display elements in reverse order using a pointer
    int *ptr = arr + n - 1; // Set the pointer to the last element

    printf("Elements in reverse order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", *ptr);
       
        ptr--; // Move the pointer to the previous element
    }

    return 0;
}