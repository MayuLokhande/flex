//c-program for table of any number..

#include<stdio.h>
int main(){
    int i,n,table;
    printf("enter the number");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    {
        table=n*i;
        printf("%d\n",table);
    }return 0;
}