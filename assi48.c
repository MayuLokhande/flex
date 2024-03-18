/*#include <stdio.h>
// Function to search for the occurrence position of a character in a string
int searchCharacterPosition(char str[], char ch) {
    int position = -1; // Default value if character is not found
for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            position = i + 1; // Position is 1-indexed
        break;
        }
    }
   return position;
}
int main() {
    char str[100];
    char searchChar;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to search: ");
    scanf(" %c", &searchChar);

    int position = searchCharacterPosition(str, searchChar);

    if (position != -1) {
        printf("The character '%c' is found at position %d in the string.\n", searchChar, position);
    } else {
        printf("The character '%c' is not found in the string.\n", searchChar);
    }
    return 0;
}*/

#include<stdio.h>
int searchracter(char str[], char ch){
    int position = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            position = i + 1; // Position is 1-indexed
        break;
        }
    }
   return position;
}
int main(){
    char str[100];
    char searchcharacter;
    printf("Enter the string :");
    scanf("%s",str);

while ((getchar()) != '\n');            //..............
    
    printf("Enter the characyter to search :");
    scanf("%c",&searchcharacter);

    int position =   searchracter(str,searchcharacter);
    
    if(position != -1){
        printf("the position of %c is %d",searchcharacter,position);
    }
    else{
        printf("the position of %c is not found",searchcharacter);
    }
    return 0;
}