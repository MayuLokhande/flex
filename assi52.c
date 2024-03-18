//Write a program which accepts a sentence from the user and alters it as follows: 
//Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ?

/*#include <stdio.h>
#include <ctype.h>
int main() {
    char sentence[100];

    // Input
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Alter the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i])) {
            // Replace space with *
            sentence[i] = '*';
        } else if (isdigit(sentence[i])) {
            // Replace digit with ?
            sentence[i] = '?';
        } else if (isalpha(sentence[i])) {
            // Reverse the case of alphabet
            if (islower(sentence[i])) {
                sentence[i] = toupper(sentence[i]);
            } else {
                sentence[i] = tolower(sentence[i]);
            }
        }
    }

    // Output
    printf("Altered sentence: %s\n", sentence);

    return 0;
}*/
/*#include<stdio.h>
#include<ctype.h>
int main(){
char sentence[100];
int i;
printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Alter the sentence
    for (int i = 0; sentence[i] != '\0'; i++) 

{
    if(isspace(sentence[i])){
        sentence[i]='*';
    }
    else if(isdigit(sentence[i])){
        sentence[i]='?';
    }
    if(isalpha(sentence[i])){
        sentence[i]= toupper(sentence[i]);
    }else{
        sentence[i]= tolower(sentence[i]);
    }
}
printf("reverse sentence is :%s",sentence);
return 0;
}
    */
/*
    #include<stdio.h>
    #include<ctype.h>
    #include<string.h>
    int main(){
        char sentence[100];
        int i;
        printf("enter the sentence : ");
        fgets(sentence,sizeof(sentence),stdin);

        //size_t len = strlen(sentence);
    if (i> 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

        for(i=0; sentence != '\0'; i++){
            if(isspace(sentence[i])){
                sentence[i] = '*';
            }
            else if(isdigit(sentence[i])){
                sentence[i] = '?';
            }
            else if(isalpha(sentence[i])){
                if(islower(sentence[i])){
                    sentence[i] = toupper(sentence[i]);
                }else{
                    sentence[i] = tolower(sentence[i]);
                }
            }
        }
        printf("altered is %s",sentence);
        return 0;
    }*/
    //Write a program which accepts a sentence from the user and alters it as follows: 
//Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ?
#include<stdio.h>
#include<ctype.h>
int main(){
    char sentence[100];
    
    printf("enter the sentence : ");
    fgets(sentence, sizeof(sentence), stdin);

    for(int i=0; sentence[i] != '\0'; i++){
        if(isspace(sentence[i])){
            sentence[i] = '*';
        }
        if(isdigit(sentence[i])){
            sentence[i] = '?';
        }
        if(isalpha(sentence[i])){
            if(islower(sentence[i])){
                sentence[i] = toupper(sentence[i]);
            }
            else{
                sentence[i] = tolower(sentence[i]);
            }
        }
    }
    printf("the altered sentence is %s",sentence);
    return 0;
}