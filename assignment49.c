/*//Write a program that will accept a string and character to search.
// The program will call a function, which will search for 
//the occurrence position of the character in the string and return its position.
// Function should return –1 if the character is not found in the string. 

#include <stdio.h>
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
}
*/
#include<stdio.h>
int searchcharacter(char str[],char ch){
    int position=-1;
    int i;
    for(i=0;str[i] != '\0';i++){
        if(str[i] == ch){
            position = i+1;
        }
    }
    return position;
}
int main(){
    char str[100];
    char searchch;

    printf("Enter the string : ");
    scanf("%s",str);

while((getchar())!='\n');


    printf("Enter the chracter to be search : ");
    scanf("%c",&searchch);

    int position = searchcharacter(str, searchch);

    if(position != -1){
        printf("the %c found at position %d",searchch,position);
    }
    else{
        printf("The %c is not found",searchch);
    }
    return 0;
}

