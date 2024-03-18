//27   28....

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
    int n,p,a,s,f,e,g,c,b,l,sqr,chioce;
    double angle;
printf("enter the chioce");
scanf("%d",&chioce);
switch(chioce){
    case 1:
    printf("Enter the angle");
    scanf("%lf",&angle);
    //int res = sin(angle * pi / 180);
    printf("sin=%f",sin(angle * pi / 180));   //*3.142/180);
break;
case 2:
printf("enter a number and power");
scanf("%f%f",&n,&p);
printf("power is %f",pow(n,p));
break;
case 3:
printf("Enter a number");
scanf("%d",&s);
sqr=sqrt(s);
printf("%d",sqr);
break;
case 4:
printf("enter a number :");
scanf("%f",&f);
printf("flooting %f",floor(f));
break;
case 5:
printf("enter tha number");
scanf("%f",&c);
printf("%f",ceil(c));
break;
case 6:
printf("enter the angle :");
scanf("%lf",&angle);
printf("%lf",cos(angle*pi/180));
break;
case 7:
printf("Enter the number :");
scanf("%f",&l);
printf("log of %fis :",log(l));
break ;
case 8:
printf("Enter two numbers :");
scanf("%d%d",&a,&b);
printf(" addition is :%d",a+b);
break;
case 9:
printf("enterthe numbers :");
scanf("%d%d",&e,&g);
printf("sub : %d",e-g);
break;
}
return 0;
}