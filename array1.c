#include<stdio.h>

void prime(int n);
int mian(){
    int n;
    printf("enter the number");
    scanf("%d ",&n);
    prime(n);
    printf("%d is a prime number",n);
    return 0;
}void prime(int n){
    int c;
for( int i=1;i<=n;i++){
    if(n%i==0){
c++;
    }
}if(c==2){
    printf("it is prime nujmmber");
}
else{
    printf("it is not prime nukmber");
}

}