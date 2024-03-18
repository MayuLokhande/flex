#include<stdio.h>
int main(){
    int i,j;
    int arr[]={1,7,4,9,8};
    printf("enter the va;lue ");
    scanf("%d",&size);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[5]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            arr[j]<arr[j+1];
        }int t;
        t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
    }
    printf("%d",arr[i]);
    return 0;
}