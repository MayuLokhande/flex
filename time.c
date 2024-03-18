#include<stdio.h>
int main(){
    int m,h,s;
    printf("enter the time:");
    scanf("%d%d%d",&m,&h,&s);
    if(h>=0 && h<24 && m>=0 && m<=60 && s>=0 && s<=60)
    {
        printf("the time is valid");
    }
    else{
        printf("invalid");

    }return 0;
}