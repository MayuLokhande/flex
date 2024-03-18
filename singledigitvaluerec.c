/*#include<stdio.h>
int sum (int num);
int main(){
    
    int num, result;
    printf("Enter the number");
scanf("%d",&num);
result = sum (num);
    
    printf( "the additon of digit of the number%d is %d",num,result);
    return 0;
}

int sum (int num){

 if(num != 0){
     
 return num%10 + sum (num/10);}
 else
return 0;
}*/


#include <stdio.h>

int digit_sum(int n) {
               if (n < 10) {
        return n;
    } else {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
            
        }
        return sum;
    }
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int result = digit_sum(n);
    printf("Sum of digits: %d\n", result);
    return 0;
}