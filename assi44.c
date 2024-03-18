/*#include<stdio.h>
int main(){
    int i,j,r,c;
  
    printf("Enter the no of rows");
    scanf("%d",&r);
     printf("Enter the no of Columns");
     scanf("%d",&c);
     
       int a[r][c];
      
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        
        printf("Enter the value for matrix a[i][j]",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("The transpose of the matrix is \n");

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("%d\t",a[j][i]);
    
}
printf("\n");
}
}*/
#include<stdio.h>
#define n 50
void inputmatrix(int matrix[n][n],int row,int column){
int i,j;

for(i=0; i<row;i++){
    for(j=0; j<column; j++){
        printf("enter teh matrix %d,%d:",i,j);
        scanf("%d", &matrix[i][j]);
    }
}
}
void displayinput(int matrix[n][n], int row, int column){
    int i,j;
    for(i=0; i<row;i++){
    for(j=0; j<column; j++){
               printf("%d\t",matrix[i][j]);
    }
    printf("\n");
}
}
void transpose(int matrix[n][n],int row, int column, int result[n][n]){
    int i,j;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            result[i][j] = matrix[j][i];
        }
    }
}
void display(int result[n][n], int row, int column){
    int i,j;
    printf("the transpose of matrix is :");
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    //printf("\n");
} int main(){
    int matrix[n][n];
    int row,column;
    int result[n][n];
    printf("enter the rows and column");
    scanf("%d %d",&row, &column);

    inputmatrix(matrix, row, column);

    displayinput(matrix, row, column);

    transpose(matrix,row, column, result);

    display(result, row, column);

   /* printf("transpose of matrix :");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d",result[i][j]);
        }
    }*/
    return 0;
}
