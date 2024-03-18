#include<stdio.h>
#define N 50
int main(){
   int a[N][N],b[N][N],c[N][N],n,m,i,j,k,p,q,sum;
   printf("enter the element of rows and column of first matrix:");
   scanf("%d%d",&n,&m);

   // printf("enter the value of first matrix a[i][j]",i,j);
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
   printf("enter the value of first matrix a[i][j]",i,j);
   scanf("%d",&a[i][j]);}
   } for(i=0;i<n;i++){
    for(j=0;j<m;j++){
   printf("%d\t",a[i][j]);}
   printf("\n");
   }
printf("Enter the element of rows and column of a second matrix :");
scanf("%d%d",&p,&q);

for(i=0;i<p;i++){
    for(j=0;j<q;j++){
   
   printf("enter the value of second matrix b[i][j]",i,j);
   scanf("%d",&b[i][j]);}
   } for(i=0;i<p;i++){
    for(j=0;j<q;j++){
   printf("%d\t",b[i][j]);}
   printf("\n");
   }
   if(m!=q){
    printf("can not multiply");
   }else{
for(i=0;i<n;i++){
    for(j=0;j<q;j++){
        sum =0;
        for(k=0;k<n;k++){
            sum=sum+(a[i][k]*b[j][k]);
        }c[i][j]=sum;
    }
}printf("multiplication of matrix :\n");
for(i=0;i<n;i++){
    for(j=0;j<q;j++){
        printf("%d\t",c[i][j]);
    }printf("\n");
}return 0;
   }
}


