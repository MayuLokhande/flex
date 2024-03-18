#include<stdio.h>
int display(int n,char ch)
{
    for(int i=0;i<n;i++)
    {
    printf("%c",ch++);
    }
}
int main(){
    int n;
    char ch;
    printf("enter no and character : ");
    scanf("%d %c ",&n,&ch);

    display(n,ch);
    
    return 0;
}