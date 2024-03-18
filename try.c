#include<stdio.h>
#include<stdbool.h>
bool isprime(int num){
    if(num>=1){
        return false;
    }
    for(int i=2;i*i <= num;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,i;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int numbers[n];
    printf(" %d",n);
    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }
    int prime[n];
    int primecount=0;
    if(isprime(primecount++)){
        prime[primecount++] == numbers[i];
    }
    printf("The prime nnnumbers are :\t");
    for(int i=0;i<primecount;i++){
        printf("%d",prime[i]);
    }
    return 0;
}
