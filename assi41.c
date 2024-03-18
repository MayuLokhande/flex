#include<stdio.h>

int isprime(int num){
    if(num <= 1){
        return 0;//not prime
    }
   
        for(int i=2; i*i <=num; i++){
            if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int number[n];
    printf("Enter the numbers :");
    for(int i=0; i<n; i++){
        scanf("%d",&number[i]);
    }
    int prime[n];
    int primecount=0;
    for(int i=0;i<n; i++){
        if(isprime(number[i])){
            prime[primecount] = number[i];
            primecount++;
        }
        
        }
        printf("the prime numbers are : ");
        for(int i=0; i<primecount; i++){
            printf("%d",prime[i]);
    }
    return 0;
}