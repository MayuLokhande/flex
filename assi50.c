//A palindrome is a string that reads the same-forward and reverse. 
//Example: “madam” is a Palindrome. Write a function which accepts a string and returns 1 
//if the string is a palindrome and 0 otherwise. Use this function in main. 


/*#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}
int main() {
    char input[100]; // Assuming a maximum string length of 100 characters
    printf("Enter a string: ");
    scanf("%s", input);

    if (isPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}*/

#include<stdio.h>
#include<string.h>

int ispalindrome(char str[]){
    int len = strlen(str);
    for( int i=0; i<len/2; i++){
        if(str[i] != str[len -1 -i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char input[100];
    printf("Enter the string : ");
    scanf("%s", input);

    if(ispalindrome(input)){
        printf("the string is polindrome");
    
    }
    else {
        printf("the string is not plindrome");
    }
    return 0;
}