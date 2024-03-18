#include<stdio.h>
int max(int *,int *);
int main()
{
int a,b;
printf("enter the numbers os a nad b");
scanf("%d%d",&a,&b);
max(&a,&b);
printf("the maximum value : %u",a,b);

}int max(int *a,int *b){
    if(a>b && b<a){
        printf("the maximum number %d",a);
    }//else {
        //printf("b is maimum %d",&b);
  //  }
    return 0;
}