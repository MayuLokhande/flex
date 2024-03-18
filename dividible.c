#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%5==0){
        printf("it is divisible by 5");
    }else if(n%7==0){
        printf("it is divisible by 7");
    }else{
        printf("itbis not divisible by 5 and 7");
    }
    return 0;
}