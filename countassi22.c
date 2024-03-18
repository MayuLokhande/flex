//Write a program to accept an integer and count the number of digits in the number
#include<stdio.h>
int main(){
    int count=0;
    int n,i;
    printf("Enter the digits :");
    scanf("%d",&n);
    while(n!=0){
        n/=10;
        count++;
    }
    printf("the count is %d",count);
    return 0;
}