//recursion fibonacci..
/*#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    fibo(n);
    printf("%d",fibo(n));
    return 0;
}*/
#include<stdio.h>
int fibo(int n){
if(n<2){
    return 1;
}else{
    return fibo(n-1)+fibo(n-2);}
}int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    fibo(n);
    printf("%d",fibo(n));
    return 0;
}