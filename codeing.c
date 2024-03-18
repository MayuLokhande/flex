#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if(ch >= '0' && ch <= '9')
    {
        printf("the character is a digit %c: ",ch);
    }else{
        printf("not digit");
    }return 0;
}