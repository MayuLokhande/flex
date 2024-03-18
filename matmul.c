#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,n,m,p,q,sum;
    printf("enter the rows and column of first matrix");
    scanf("%d%d",&n,&m);
    // printf("enter the first matrix a[i][j]");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        { printf("enter the first matrix a[i][j]");
            scanf("%d",&a[i][j]);
        }printf("\n")
    }

    printf("enter the number of rows and column of second matrix");
    scanf("%d%d",&p,&q);
    printf("enter the second matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)

{
    scanf("%d",&b[i][j]);
}    }

printf("the matrix element of a:\t");
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
printf("the matrix element of b:\t");
printf("\n");
 for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)

{
    printf("%d\t",b[i][j]);
}    }
printf("\n");
if(m!=p)
{
    printf("can not multiply");
}
else{
for(i=0;i<n;i++)
{
    for(j=0;j<q;j++)
    {  sum=0;
        for(k=0;k<n;k++){
            sum=sum+(a[i][k]*b[k][j]);
        }
        c[i][j]=sum;
    }
} printf("multiplication of matrix:\n");

for(i=0;i<n;i++)
{
    for(j=0;j<q;j++)
{
    printf("%d\t",c[i][j]);
}printf("\n");
}

}
return 0;
}