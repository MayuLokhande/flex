//Write a program to add and multiply two matrices. 
//Write separate functions to accept, display, add and multiply the matrices. 
//Perform necessary checks before adding and multiplying the matrices

/*#include <stdio.h>
#define MAX_SIZE 10
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
int addMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return 1; // Operation successful
}
int multiplyMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], 
int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 0; // Operation unsuccessful
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return 1; // Operation successful
}
int main() {   

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    // Input for the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    inputMatrix(matrix1, rows1, cols1);

    // Input for the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);
    inputMatrix(matrix2, rows2, cols2);

    // Display the input matrices
    printf("\nInput Matrices:\n");
    printf("Matrix 1:\n");
    displayMatrix(matrix1, rows1, cols1);
    printf("Matrix 2:\n");
    displayMatrix(matrix2, rows2, cols2);

    // Matrix addition
    if (rows1 == rows2 && cols1 == cols2) {
        if (addMatrices(matrix1, matrix2, result, rows1, cols1)) {
            printf("\nMatrix Addition Result:\n");
            displayMatrix(result, rows1, cols1);
        } else {
            printf("Matrix addition failed.\n");
        }
    } else {
        printf("Matrices cannot be added. They must have the same dimensions.\n");
    }
// Matrix multiplication
    if (multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2)) {
        printf("\nMatrix Multiplication Result:\n");
        displayMatrix(result, rows1, cols2);
    }
    return 0;
}*/
/*
#include<stdio.h>
#define n 50
void inputmatrix(int matrix[n][n],int row,int column){
    int i,j;
    for(i=0;i<row; i++){
        for(j=0; j<column; j++){
        scanf("%d",&matrix[i][j]);
        }
    }
}void displaymatrix(int matrix[n][n],int row,int column){
    int i,j;
    printf("enter the elements of an amtrix");
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("%d",matrix[i][j]);
        }
    }
}
void addmatrix(int matrix1[n][n],int matrix2[n][n],int result[n][n],int row, int column){
    int i,j;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
        
            result[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }
}
void multiplymatrix(int matrix1[n][n],int matrix2[n][n],int result[n][n],int row1,int row2,int column1,int column2){
    int i,j;
    for(i=0; i<row1; i++){
        for(j=0; j<column2; j++){
            for(int k=0; k<row2; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
int main(){
    int i,j,k;
    int matrix1[n][n],matrix2[n][n];
    int row1;
    int row2,column1,column2;
    int result[n][n];
    printf("enter the row of 1 matrix");
    scanf("%d",&row1);

    printf("enter the column of 1 matrix");
    scanf("%d",&column1);
    inputmatrix(matrix1,row1,column1);


    printf("enter the row of second ");
    scanf("%d,&row2");

    printf("enter the column of 2 matrix ");
    scanf("%d",&column2);
    inputmatrix(matrix2,row2,column2);

    printf("display the first matrix :");
    displaymatrix(matrix1,row1,column1);
    printf("display the second matrix");
    displaymatrix(matrix2,row2,column2);

printf("addition of matrix :");
if(row1 == row2 && column1 == column2){
    addmatrix(matrix1,matrix2,result,row1,column1);
        displaymatrix(result,row1,column1);
    }
else{
    printf("matrix cannot added");
}

printf("multiplication of matrix :");
if(row1 == column2){
        multiplymatrix(matrix1, matrix2, row1, row2, result,column1,column2);
displaymatrix(result,row1,column2);
}else{
    printf("matix canot multipluy");
}
return 0;
}*/
#include <stdio.h>
#define n 50

void inputmatrix(int matrix[n][n], int row, int column) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displaymatrix(int matrix[n][n], int row, int column) {
    int i, j;
    printf("Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addmatrix(int matrix1[n][n], int matrix2[n][n], int result[n][n], int row, int column) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplymatrix(int matrix1[n][n], int matrix2[n][n], int result[n][n], int row1, int row2, int column1, int column2) {
    int i, j, k;
    for (i = 0; i < row1; i++) {
        for (j = 0; j < column2; j++) {
            for (k = 0; k < row2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[n][n], matrix2[n][n];
    int row1, row2, column1, column2;
    int result[n][n];

    printf("Enter the row of the first matrix: ");
    scanf("%d", &row1);

    printf("Enter the column of the first matrix: ");
    scanf("%d", &column1);
    inputmatrix(matrix1, row1, column1);

    printf("Enter the row of the second matrix: ");
    scanf("%d", &row2);

    printf("Enter the column of the second matrix: ");
    scanf("%d", &column2);
    inputmatrix(matrix2, row2, column2);

    printf("Display the first matrix:\n");
    displaymatrix(matrix1, row1, column1);

    printf("Display the second matrix:\n");
    displaymatrix(matrix2, row2, column2);

    printf("Addition of matrices:\n");
    if (row1 == row2 && column1 == column2) {
        addmatrix(matrix1, matrix2, result, row1, column1);
        displaymatrix(result, row1, column1);
    } else {
        printf("Matrices cannot be added.\n");
    }

    printf("Multiplication of matrices:\n");
    if (column1 == row2) {
        multiplymatrix(matrix1, matrix2, result, row1, row2, column1, column2);
        displaymatrix(result, row1, column2);
    } else {
        printf("Matrices cannot be multiplied.\n");
    }

    return 0;
}