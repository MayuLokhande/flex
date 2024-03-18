#include<stdio.h>

void sum(int n ,int s)
{
    if(n==0)
    { 
        printf("%d",s);
        return;
        
        }
    sum(n-1,s+n);
    return;
  }
int main(){
    int n,s=0;
    printf("Enter the numbers : ");

    scanf("%d",&n);

    sum(n,s);
    return 0;
}
/*#include<stdio.h>

int sumOfDigits(int n) {
    if(n == 0) {
        return 0;}
    if(n<10) 
    {
        return n;}
    int s = n % 10;
       n /= 10;
       return s+sumOfDigits(n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = sumOfDigits(n);
    printf("Sum of digits: %d\n", sum);
    return 0;
}*/
