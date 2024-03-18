#include<stdio.h>
int iseven(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,ans;
    printf("Enter the number : ");
    scanf("%d",&n);
    ans=iseven(n);
    if(ans==1){
        printf(" it is even ");
    }else
    {
        printf(" it is odd ");
    }
    return 0;
}