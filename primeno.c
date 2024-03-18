#include<stdio.h>
int main(){
    int n,c=0;
    printf("enter the number");
    scanf("%d",&n);
for( int i=1;i<=n;i++){
  if(n%i==0){
    c++;
  }
}
if(c==2){
  printf("%d is a prime number\n",n);
}
else{
  printf("\n %d is not prime number ",n);
}return 0;
}











/*  for(int i=1;i<=n;i++){
    if(n%i==0){
       c++;
       if(c==0){
        printf("it is prime number");
    }
  else{
    printf("it is not prime number");
  }return 0;
}
  
  }*/
 