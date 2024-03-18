#include<stdio.h>
#define pi 3.142
int sqaurearea(int side);
int circlearea(int radius);
int rectanglearea(int a, int b);
int main()
{
int side=5;
int radius=9;
int a=6,b=1;
    printf("side area %d:\n",sqaurearea(side));
    printf("cicle area %d:\n",circlearea(radius));
    printf("reactangle area %d:\n",rectanglearea(a,b));
    return 0;
}
int sqaurearea(int side){
    return side*side;
}
int circlearea(int radius){
    return pi*radius*radius;
}
int rectanglearea(int a, int b){
    return a*b;
}