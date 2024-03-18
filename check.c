#include<stdio.h>
int main(){
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("lowercase character");

    }else
    if(ch>='A' && ch<='Z')
    {
        printf("uppercase character");
    }else
    if(ch>='0' && ch<='9'){
        printf("digit");
    }else {
        printf("it not ch di and u an ll");
    }
    return 0;
}