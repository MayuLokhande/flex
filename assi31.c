
#include<stdio.h>

int power(int a, int b) {
    if (b == 0) return 1;
    int recans =  a * power(a, b - 1);
    return recans;
}

int main() {
    int a;
    printf("Enter the base: ");
    scanf("%d", &a);

    int b;
    printf("Enter the power: ");
    scanf("%d", &b);

    int p = power(a, b);
    printf("%d raised to the power of %d is %d\n", a, b, p);
return 0;
}