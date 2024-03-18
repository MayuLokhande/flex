
// swaping of three numbers
#include<stdio.h>

int main()
{
  int a, b, c;
  printf("enter the values");
  scanf("%d%d%d",&a,&b,&c);
  printf("before %d\n %d\n %d\n",a,b,c);
  int t;
  t=a;
  a=b;
  b=c;
  c=t;
  printf("swap %d\n%d\n%d\n",a,b,c);
  return 0;
    
}