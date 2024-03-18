#include<stdio.h>
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            arr[j]<arr[j+1];{
                int t;
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

int  mian(){
    int arr[]={1,2,3,6,18,10};
   int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }return 0;
}