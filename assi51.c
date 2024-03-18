//For the following standard functions, 
//write corresponding user defined functions and write a menu driven program to use them.
// strcat, strcmp, strrev, strupr 
/*#include <stdio.h>
#include <string.h>

// User-defined strcat function
char* my_strcat(char *dest, char *src) {
    strcat(dest, src);
    return dest;
}
// User-defined strcmp function
int my_strcmp( char *str1, char *str2) {
    return strcmp(str1, str2);
}

// User-defined strrev function
char* my_strrev(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}

// User-defined strupr function
char* my_strupr(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
    return str;
}

// User-defined inc function (assuming it increments an integer)
int my_inc(int num) {
    return num + 1;
}

int main() {
    char str1[50], str2[50];
    int choice, num;

    do {
        printf("\nMenu:\n");
        printf("1. strcat\n");
        printf("2. strcmp\n");
        printf("3. strrev\n");
        printf("4. strupr\n");
        printf("5. inc\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                printf("Result after strcat: %s\n", my_strcat(str1, str2));
                break;

            case 2:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                printf("Result of strcmp: %d\n", my_strcmp(str1, str2));
                break;

            case 3:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Result after strrev: %s\n", my_strrev(str1));
                break;

            case 4:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Result after strupr: %s\n", my_strupr(str1));
                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &num);
                printf("Result after inc: %d\n", my_inc(num));
                break;

            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}
#include<stdio.h>
#include<string.h>

char* my_strcat(char *dest, const char *src){
    strcat(dest, src);
    return dest;
}
int my_strcmp(const char *str1,const char *str2){
   return strcmp(str1, str2);
}
char* my_strrev(char *str){
    int length = strlen(str);
    for(int i=0; i< length/2; i++){
        char temp = str[i];
        str[i] = str[length -1-i];
        str[length -1 -i] = temp;
    }
    return str;
}
int* my_strupr(char *str){
    for(int i=0; str[i] != '\0'; i++)
    if(str[i] >='a' && str[i]<='z'){
        str[i] = str[i]-('a'-'A');
    }
    return str;
}
int* my_strinc(int *n){
    *n++;
    return n;
}
int main(){
    int str1[50],str2[50],n;
    int choice;
    do{
    //int str1[50],str2[50],n;

printf("enter the choice : ");
scanf("%d",&choice);
switch(choice){
case 1 :
    printf("enter the string 1 :");
    scanf("%s",str1);
    printf("enter the string 2 :");
    scanf("%s",str2);
    printf("the strcat ",my_strcat(str1, str2));
break;

case 2:
    printf("enter tge str1 :");
    scanf("%s", str1);
    printf("enter the str2 : ");
    scanf("%s", str2);
    printf("the strcmp",my_strcmp(str1, str2));
    break;

case 3:
     printf("enter the str1 :");
     scanf("%s", str1);
     printf("reverse is ",my_strrev(str1));
break;

case 4:
    printf("eneter the str1");
    scanf("%s", str1);
    printf("upercase is ",my_strupr(str1));
    break;

case 5:
     printf("enter the number :");
     scanf("%d",&n);
     printf("increment :",*my_strinc(&n));
     break;
/*
case 6:
     printf("enter the string :");
     scanf("%s%s",str1,str2);
     printf("cpy",my_strcpy("str1","str2"));
     break;

case 6:
   printf("program is exit ... goodbye !!!");
   break;

   default:
   printf("enetr the valid case");
}}
while(choice != 6);

return 0;
}*/
#include<stdio.h>
#include<string.h>
char* my_strcat(char *dest,const char *src){
   // strcpy(dest, src);
    strcat(dest, src);
    return dest;
}
int my_strcmp(char *str1, char *str2){
    return strcmp(str1, str2);
}
char* my_strrev(char *str){
    int len = strlen(str);
    for(int i=0; i<len/2; i++){
        int temp =str[i];
        str[i] = str[len -1 -i];
        str[len -1 -i] = temp;
    }
    return str;
}
char* my_strupr(char *str){
for(int i=0; str[i] != '\0'; i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i] = str[i] -('a' - 'A');
    }}
    return str;
}
int my_inc(int num) {
    return num + 1;
}
int main(){
    char str1[50];
    char str2[50];
    int choice,num;
    do{
    printf("Enter the choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("enter the string 1 :");
        scanf("%s",str1);
        printf("enter the string 2 :");
        scanf("%s",str2);
        printf("cancatenate is %s",my_strcat(str1, str2));
        break;
        case 2:
        printf("enter the string 1 :");
        scanf("%s",str1);
        printf("enter the string 2 :");
        scanf("%s",str2);
        printf("campart %d",my_strcmp(str1, str2));
        break;
        case 3:
        printf("enter the string 1 :");
        scanf("%s",str1);
        printf("reverse is %s",my_strrev(str1));
        break;
        case 4:
        printf("enter the string 1 :");
        scanf("%s",str1);
        printf("reverse is %s",my_strrev(str1));
        break;
        case 5:
        printf("enter the string 1 :");
        scanf("%s",str1);
        printf("uper case %s",my_strupr(str1));
        break;
        case 6:
        printf("entrthe no :");
        scanf("%d",&num);
        printf("enter the no..",my_inc(num));
        break;
        case 7:
        printf("exit goodbye !!");
        break;

        default:
        printf("enter the valid choice\n");
        }
    }while( choice != 7);
return 0;
}