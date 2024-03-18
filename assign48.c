//Write a program to allocate memory dynamically for n integers 
//such that the memory is initialized to 0. 
//Accept the data from the user and find the range of the data elements
/*#include <stdio.h>
#include <stdlib.h>// memory dynamic allocation..

int main() {
    int n;

    // Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers and initialize to 0
    int *arr = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
   if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Accept data from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Find the range of the data elements
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    // Display the range
    printf("Range of the data elements: %d to %d\n", min, max);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter");
    scanf("%d",&n);
int i;
    int *arr=(int*)calloc(n, sizeof(int));

    printf("integers %d: \n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
        int max=arr[0];
    for(i=0;i<n; i++){
        
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }}
        printf("range of the data element from %d to %d",min,max);
        free(arr);
        return 0;
    
}