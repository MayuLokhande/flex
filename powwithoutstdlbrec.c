/*#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
return 1;
}*/

#include<stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return  a * power (a ,b-1);
    }
}
int main(){
    int a;
    printf("Enter the base : ");
    scanf("%d ",&a);
    int b;
    printf("Enter the power :");
    scanf("%d",&b);
    int res=power(a,b);
    printf("%d ^ %d : %d ",a,b,res);
    return 0;
}