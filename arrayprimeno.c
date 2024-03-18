#include <stdio.h>
//41...
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int n;

    // Accept the value of n
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    int prime[n]; // Assuming that all numbers are prime initially

    // Accept n numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int primeCount = 0; // Count of prime numbers

    // Check each number and store prime numbers in the 'prime' array
    for (int i = 0; i < n; i++) {
        if (isPrime(numbers[i])) {
            prime[primeCount] = numbers[i];
            primeCount++;
        }
    }

    // Display the prime numbers
    printf("Prime numbers are: ");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", prime[i]);
    }

    return 0;
}/*#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i*i  <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
 // Accept the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
// Declare an array to store the numbers
    int numbers[n];
    // Accept n numbers from the user
    printf("Enter numbers[%d]:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);}
// Find and store prime numbers in the 'prime' array
    int prime[n];
    int prime_count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(numbers[i])) {
            prime[prime_count] = numbers[i];
            prime_count++;
        }}
// Display the prime array
    printf("\nPrime numbers in the array are: ");
    for (int i = 0; i < prime_count; i++) {
        printf("%d ", prime[i]);
    }
    return 0;
}*/
/*
#include<stdio.h>
int iseven(int n){
 //return (n%2 == 0) ? 1 :0;
 if(n%2 ==0){
    return 1;
 }else{
    return 0;
 }
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int i;
    int arr[n];
    printf("Enter the %d numbers ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++){
if(iseven(arr[i])){
    printf("%d the even",arr[i]);
}
else{
    printf("%dt is odd",arr[i]);
}}
return 0;
}*/