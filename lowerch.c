#include<stdio.h>
int main()
{
    char ch;
printf("enter the lowercase character");
scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
    printf("the character is vowel");
}
else {
    printf("the character is consonent");

}
return 0;
}