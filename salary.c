#include<stdio.h>
float salary(float sal,float tax);
int main(){
    int sal ,tax;
    salary(sal , tax);
    tax=sal*0.2;
    printf("the tax of tha salay is %f :",tax);
   return 0;
}float salary(float sal,float tax){
    
    printf("enetr the salary:");
    scanf("%f",&sal);
    if(sal>15000)
    return sal;
}