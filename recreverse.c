#include <stdio.h>

void recursivePrint(int n) {
    if (n < 10) {
        printf("%d\t", n);
    } else {
        printf("%d\t", n % 10);
        recursivePrint(n / 10);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");
    recursivePrint(num);

    return 0;
}













/*#include<stdio.h>
void incresing(int n){
    if(n==0)  
return;
 if(n>0){
        incresing(n-1);
        printf("%d\n",n);
    }
}
void decresing(int n){
    if(n>0){
        printf("%d\n",n);
        decresing(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    incresing(n);
    decresing(n);
    return 0;
}*/