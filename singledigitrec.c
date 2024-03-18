#include <stdio.h>

int sumOfDigits(int n) {
    // Base case: If the number is a single digit, return it
    if (n < 10) {
        return n;
    }
    
    // Recursive case: Calculate the sum of digits and call the function again
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    // Recursive call with the new sum
    return sumOfDigits(sum);
}

int main() {
    int number;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Calculate and display the result
    int result = sumOfDigits(number);
    printf("The sum of digits until a single-digit number is: %d\n", result);
    
    return 0;
}