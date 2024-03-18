#include<stdio.h>
int main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%4==0 && year%100==0 && year % 400==0){
        printf("%d is leap year:",year);
     }
     else {
        printf("it is not leap year");
}return 0;
}