#include<stdio.h>
int main(){
    int i,sum=0;
    int arr[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        sum=sum +arr[i];
    }
    printf("%d",sum);
    return 0;
}