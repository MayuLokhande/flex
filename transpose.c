#include<stdio.h>
int main(){
    int i,j,n,m;
    int a[n][m];
    printf("Enter the number of rows :\n");
    scanf("%d",&n);
    printf("Enter the number of columns :\n");
    scanf("%d",&m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("Enter the array a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
    
}for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d",a[i][j]);
    }
}return 0;
}

/*#include<stdio.h>
int main(){z
    int i,j,r,c;
    printf("Enter the number of rows:\n and column:");
    scanf("%d%d",&r,&c);
     int a[r][c];
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" enter the value of matrix a[i][j]",i,j);
            scanf("%d",&a[i][j]);
        }
     }for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);}
            printf("\n");
            }
            printf("the transpose of matrix is \n");
             for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[j][i]);} printf("\n");
             }return 0;

}*/