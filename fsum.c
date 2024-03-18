#include<stdio.h>
int sum(int a,int b);
int main()
{
int a,b,s;
printf("Enter the number");
scanf("%d%d",&a,&b);
sum(a,b);
s=a+b;
printf("%d",s);
return s;
}
int sum(int x,int y)
{
  return x+y;
}