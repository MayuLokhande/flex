#include<stdio.h>
int fibo(int n);
int main()
{
    printf("%d",fibo(3));
    return 0;
}
int fibo(int n){
    if(n==0 || n==1)
    {
        if(n==0)                 // base condtion..
        {
            return 0;
        }if(n==1)
{
    return 1;
}
    }
   
    int fibo1=fibo(n-1);
    int fibo2=fibo(n-2);
   int fibo=fibo1+fibo2;
   //printf("%d\n",n,fibo);
   return fibo;
}