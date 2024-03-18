#include <stdio.h>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6,3,8};
    int i;
   int size = sizeof(arr) / sizeof(arr[i]);
    int target = 2;
/*int size;
    printf("Enter the size of an array : ");
    scanf("%d",&size);

    int arr[size];
    int i;
    printf("Enter the elements in an array arr[%d]\n :",arr[i]);
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);}
     int target;
    printf("Enter the element to be serach :");
    scanf("%d",&target);*/


    int occurrences = countOccurrences(arr, size, target);

    printf("The number %d occurs %d times in the array.\n", target, occurrences);
     return 0;
}
/*#include<stdio.h>
int countoccurence(int *arr,int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        int i;
        if(arr[i] == key){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);

    int arr[n];
    int i;
    printf("Enter the elements in an array arr[%d]\n :",arr[i]);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    int key;
    printf("Enter the element to be serach :");
    scanf("%d",&key);

  int c=countoccurence(arr,n,key);

  printf("the number %d occurs %d times : ",key,c);
  return 0;
}*/