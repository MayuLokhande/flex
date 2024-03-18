/*#include <stdio.h>

int main() {
    char str[100];
    char target;
    int frequency = 0;

    // Input
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to find frequency: ");
    scanf(" %c", &target);  // Note the space before %c to consume the newline character

    // Calculate frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            frequency++;
        }
    }

    // Output
    printf("Frequency of %c: %d\n", target, frequency);

    return 0;
}*/


/*#include <stdio.h>

void findFrequency(char str[]) {
    int count[256] = {0}; // Assuming ASCII characters

    // Traverse the given string and count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    // Display the frequency of each character
    printf("Character Frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", (char)i, count[i]);
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Call the function to find and display character frequencies
    findFrequency(inputString);

    return 0;
}*/
//Write a program to find the frequency of the character in the given string.
#include<stdio.h>
int main(){
    char str[100];
    int freq=0;
    char target;

    printf("enter the string :");
    fgets(str, sizeof(str), stdin);

    printf("enter the character to find : ");
    scanf("%c",&target);

    for(int i=0; str[i]  != '\0'; i++){
        if(str[i]==target)
        freq++;
    }
    printf("%c : %d",target,freq);

return 0;
}