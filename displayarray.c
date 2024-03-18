#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the size of an array : \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the values in array arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf(" Display the array : ");
     
     for(int i=0 ; i<n ; i++){
        printf("arr[%d]=%d\t",i,arr[i]);
     }
     return 0;
}