/*#include<stdio.h>
int main(){
    printf("%d\n",sizeof(double));
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    printf("%d",ptr);
    return 0;
}