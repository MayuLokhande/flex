#include<stdio.h>
int main(){
    printf("enter the size of aarray:");
    int size;
    scanf("%d",&size);
    int arr[size],i=0,j=0,t,k,t2;
    printf("Enter the ele,ment of array :\n");
    for(j=0;j<size;j++)
    {
        scanf("%d",&arr[j]);
    }t=size;
while(t>=0){
        for(k=0;k<t-1;k++){
          t2=arr[k];      //swaing ith a temporary element...]
            arr[k]=arr[k+1];
            arr[k+1]=t2;
        }t--;
    }printf("after reversing array is :\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }return 0;
}
