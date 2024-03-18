#include<stdio.h>
int main()
{
   
    int x,y,z;
    printf("Enter the nnumbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x<z){
        printf("%d is between the numbers",x);
    }else
    {
        printf("it is not between the other two numbers");
    }
    return 0;

}