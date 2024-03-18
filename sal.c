#include<stdio.h>
int main()
{
    float sal,tax;
    printf("enter the salary");
    scanf("%f",&sal);

    if(sal<150000)
    {
        tax=0;
        printf("the tax of salary%f\n",tax);
    }
    else if(sal>150000 && sal<3000000)
{
    tax=sal*20/100;
    printf("the tax of salary%f\n",tax);
}
else if(sal>3000000)
{
    tax=sal*30/100;
    printf("the tax of salary is %f\n",tax);
}
return 0;
}