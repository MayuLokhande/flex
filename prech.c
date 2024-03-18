#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>='a' || ch<='z')
    {
        ch=ch-1;
    }
    printf("%c",ch);
    return 0;
}