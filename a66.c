//Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive) 
//20. Write a program to accept two integers x and n and compute xn .
print("hello...")
/*
#include<stdio.h>
int main(){
    int x,y,c=0,i;
    printf("enter the two numbers : ");
    scanf("%d %d",&x, &y);
    for(i=x; i<=y; i++){
c  += i;
    }
    printf("tsum between %d and %d is %d",x,y,c);
    return 0;
    }

   #include<stdio.h>
   #include<math.h>

   int main(){
    int a,b;
    printf("enter the base");
    scanf("%d",&a);
    printf("enter the power : ");
    scanf("%d",&b);

    int r=pow(a,b);
    printf("%d ",r);
    return 0;

   }*/

  /* #include<stdio.h>
   #include<string.h>
   int ispolindrome(char str[]){
    int i;
    int len = strlen(str);
    for(i=0; i< len/2; i++){
if(str[i] != str[len -1 -i])
return 0;
    }
    return 1;
   }
   int main(){
    char str[100];
    printf("enter the string : ");
    scanf("%s", str);
//ispolindrome(str);
if(ispolindrome(str)){
    printf("it is polindeome ");
}else{
    printf("not polindrome");
}
return 0;
   }*/
   /*#include<stdio.h>
   #include<stdlib.h>
   void dynamic(int n){

   }
   int main(){
    int n;
    printf("enter the nnumbers");
    scanf("%d",&n);
    int * arr=(int *)calloc(n,sizeof(int));

    printf("enter the %d integers ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int min=arr[0];
    int max= arr[0];
    for(int i=0;i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
   }
   printf("the is max to min %d to %d",min,max);

    free(arr);
    return 0;

   }*/
   /*
   #include<stdio.h>
   int isprime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i=2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
   }
   int main(){
    int n,i;
    printf("enter the number : ");
    scanf("%d",&n);
    int num[n];
    int prime[n];
    printf("enter the %d integers : ");
    for(int i=0;i<n; i++){
    scanf("%d",&num[i]);
    }
    int count =0;
    for(i=0; i<n; i++){
        if(isprime(num[i])){
            prime[count]=num[i];
            count++;
        }
    }
    printf("the prime numbers are : ");
    for(i=0; i<count; i++){
        printf("%d",prime[i]);
    }
return 0;
   }*/
   /*#include<stdio.h>
   #include<string.h>
   int main(){
    char str[100];
    printf("enter the string :");
    fgets(str, sizeof(str), stdin);

    char target;
    printf("enter the charcater to find out : ");
    scanf("%c",&target);
    int frequency=0;

    for(int i=0; str[i] !='\0'; i++){
        if(str[i] == target)
        frequency++;
    }
    printf("the freq is %d ",frequency);

    return 0;
   }*/
   //For the following standard functions, 
//write corresponding user defined functions and write a menu driven program to use them.
// strcat, strcmp, strrev, strupr 
/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *my_strcat(char *dest, char *src){
    strcat(dest, src);
    return dest;
}
int my_strcmp(char *str1, char *str2){
    return strcmp(str1, str2);
}
char *my_strrev(char *str){
    int i;
    int length=strlen(str);
    for(i=0; i<length/2; i++){
    char temp=str[i];
    str[i]=str[length -1 -i];
    str[length -1 -i]= temp;
    }
    return str;
}
char *my_strupr(char *str){
    for(int i=0; str[i] != '\0'; i++){
       
           if(islower(str[i])){
         str[i] = toupper(str[i]);
            
        }
        
} return str;
}
int main(){
    int choice;
    char str1[100];
        char str2[100];
        do{
    printf("enter the choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        
        printf("enter the s1 :");
        scanf("%s",str1);
        printf("enter the str2 :");
        scanf("%s", str2);
       printf("strcat is %s", my_strcat(str1, str2));
       break;

       case 2:
        printf("enter the s1 :");
        scanf("%s",str1);
        printf("enter the str2 :");
        scanf("%s", str2);
       printf("strcat is %d", my_strcmp(str1, str2));
       break;

       case 3:
        printf("enter the s1 :");
        scanf("%s",str1);
        printf("strcat is %s", my_strrev(str1));
       break;

       case 4:
        printf("enter the s1 :");
        scanf("%s",str1);
        printf("strcat is %s", my_strupr(str1));
       break;
        
        case 5:
        printf("the programe exit good bye !!");
       break;

       default:
       printf("enter the valid choice :");

       }

    }while(choice != 5);
    return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
int ispalindrome(char *str){
    int i;
    int len=strlen(str);
    for(i=0; i<len/2; i++){
        if(str[i] != str[len -1 -i])
        return 0;
    }
    return 1;
}
int main(){
char str[100];
printf("enter the string : ");
scanf("%s", str);

if(ispalindrome(str)){
    printf("it is pollindrome");
}
else{
    printf("it is not pollindrome :");
}
return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
int search(char str[], char ch){
    int position = -1;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch)
        position=i+1;
    }
return position;
}
int main(){
    char str[100];
    printf("enter the string : ");
    scanf("%s", str);

    while((getchar())!='\n');

    char ch;
    printf("enter the chracter ");
    scanf("%c",&ch);

    int position =search(str,ch);

    if(position != -1){
        printf("the position of charchater %c is %d",ch,position);
    }
return 0;,
    }*/
    //Write a program to display the elements of an array containing 
//n integers in the reverse order using a pointer to the array.
/*#include <stdio.h>
int main(){
    int n;
    printf("enter the integer : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter the %d elements ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int *ptr=arr +n -1;

    printf("thr reverse is ");
    for(int i=0;i<n;i++){
        printf("%d\n",*ptr);
        --ptr;
    }
    return 0;
}*/
/*
#include<stdio.h>
int addtime(int *hour, int *minute, int *second,int s){
    int totaltime = *hour*3600 + *minute *60 + *second;

     totaltime +=s;

    *hour=totaltime/ 3600;
    *minute = (totaltime % 3600) / 60;
    *second = totaltime % 60;
}
int main(){
int hour,minute, second;
printf("enter the hour minnute and second ");
scanf("%d %d %d",&hour, &minute, &second);

int addsecond;
printf("enter the additional second");
scanf("%d",&addsecond);

addtime(&hour, &minute, &second, addsecond);

printf("the timr is %02d:%02d:%02d",hour,minute,second);
return 0;

}*/
/*
#include<stdio.h>
#define n 50
void inputmatrix(int matrix[n][n], int row, int column){
    printf("enter the matrix :");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}
void displaymatrix(int matrix[n][n],int row, int column){
    printf("matrix : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
int addmatrix(int matrix1[n][n], int matrix2[n][n], int row, int column, int result[n][n]){
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    
}
}
int multimatrix(int matrix1[n][n], int matrix2[n][n],int row1,int row2, int column1, int column2,int result[n][n]){
    for(int i=0; i<row1; i++){
    for(int j=0; j<column2; j++){
        for(int k=0;k<row2; k++){
            result[i][j]  += matrix1[i][k] + matrix2[k][j];
        }
}
}
}

int main(){
    int matrix1[n][n];
    int matrix2[n][n];
    int row1,row2,column1,column2;
    int result[n][n];
    printf("enter the row 1 ;");
    scanf("%d",&row1);

    printf("enter the column 1 : ");
    scanf("%d",&column1);

    inputmatrix(matrix1, row1, column1);



    printf("the 1 matrix is :\n");

    displaymatrix(matrix1,row1,column1);
    
    
    printf("enter the row 2 ;");
    scanf("%d",&row2);

    printf("enter the column 2 : ");
    scanf("%d",&column2);

    inputmatrix(matrix2, row2, column2);

     printf("the 2 matrix is :\n");

    displaymatrix(matrix2,row2,column2);
    
    printf("addition is :");
    addmatrix(matrix1,  matrix2, row1, column1, result);
    displaymatrix(result,row1,column1);
    
    printf("multiplication is : ");
    multimatrix(matrix1, matrix2, row1,row2, column1,column2,result);
    displaymatrix(result,row1,column2);

    return 0;

}*/
/*
#include<stdio.h>
#define n 50
void inputmatrix(int matrix[n][n], int row, int column){
    printf("enter the matrix :");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}
void displaymatrix(int matrix[n][n],int row, int column){
    printf("matrix : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}void transpose(int matrix[n][n],int row,int column,int result[n][n]){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            result[i][j] = matrix[j][i];
        }
}}
int main(){
    int matrix[n][n];
    int result[n][n];
    int row1,column1;

    printf("enter the row 1 ;");
    scanf("%d",&row1);

    printf("enter the column 1 : ");
    scanf("%d",&column1);

    inputmatrix(matrix, row1, column1);

    printf("display of matrix ");
    displaymatrix(matrix,row1,column1);

    printf("transpose is ");
    transpose(matrix,row1,column1,result);
    displaymatrix(result,row1,column1);

    return 0;

}*/
/*
#include<stdio.h>
int main(){
    int m,n,i,j;
    int set1[50];
    int set2[50];
    printf("enter ");
    scanf("%d",&m);
    
    printf("set 1 ");
    for(i=0; i<m; i++){
        scanf("%d",&set1[i]);
    }
     printf("enter ");
    scanf("%d",&n);
    
    printf("set 1 ");
    for(i=0; i<n; i++){
        scanf("%d",&set2[i]);
    }

    printf("union");
    for(i=0; i<m; i++){
        printf("%d",set1[i]);

        for(i=0; i<n; i++){
           
            int duplicate=0;
           
            for(j=0;j<m;j++){
           
                if(set2[i] == set1[j])
                duplicate = 1;
            break;
            }
            if(! duplicate){
           
           
            printf("%d",set2[i]);
        }
        }
       
    }

    printf("intersecton");

    for(i=0; i<m; i++){
       
        for(j=0; j<n; j++){
       
            if(set1[i] == set2[j]){
       
                printf("%d",set1[i]);
            }
        }
    }
    return 0;
}*/
/*
#include<stdio.h>
int occurence(int arr[],int n,int key){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] == key)
        
    {
      count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("enter the integer");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the  eliments");
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    
    }
    
    int key;
    printf("enter the number to find ");
    scanf("%d",&key);

int count = occurence( arr, n,key);    
    printf("%d ocuures %d times ",key,count);
}*/
//Write a program to accept n numbers in the range of 1 to 25 
//and count the frequency of occurrence of each number. 
/*#include <stdio.h>

int main() {
    int n;

    // Accept the value of n
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to store the numbers
    int numbers[n];

    // Initialize an array to store the frequency of each number
    int frequency[25] = {0};  // Initialize all elements to 0

    // Accept n numbers from the user in the range of 1 to 25
    printf("Enter %d numbers in the range of 1 to 25:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        // Increment the frequency of the entered number
        frequency[numbers[i] - 1]++;
    }

    // Display the frequency of each number
    printf("\nFrequency of occurrence of each number:\n");
    for (int i = 0; i < 25; i++) {
        printf("Number %d: %d times\n", i + 1, frequency[i]);
    }

    return 0;
}*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("enter the integer ");
    scanf("%d",&n);

    int number[n];
    int freq[25] = {0};
    printf("Enter the numnbers ");
    for(int i=0;i<n; i++){
        scanf("%d",&number[i]);
        freq[number[i] -1 ]++;
    }
    printf("frquency of every number is ");
    for(int i=0; i<25; i++){
        printf(" %d  %d\n",i+1,freq[i]);
    }
    return 0;
}*/
/*
#include<stdio.h>
void reverseprintf(int n){
    if(n<10){
        printf("%d\t",n);
    }
    else{
        printf("%d\t",n%10);
    reverseprintf(n/10);
    }
}
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);

    printf("thr reversse is ");
    reverseprintf(num);

    return 0;
}*/
/*
#include<stdio.h>
int single(int n){
    if(n<10)
    return n;
int sum=0;
while(n>0){
   sum += n%10;
    n/=10;
}
return single(sum);
}
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);

    
    single(n);
    printf("%d",single(n));

    return 0;
}*/
/*#include<stdio.h>
int sum(int n)
{
	int x,y;
	if(n<10&&n>0)
	{
		return n;
	}

	x=n%10;
	n=n/10;
	y=x+sum(n);	
	return y;
}
int main()
{
	int n,y;
	printf("Enter the number ");
        scanf("%d",&n);

	y=sum(n);
	 printf("Sum is %d ",y);
return 0;
}*/

#include<stdio.h>
int sum(int n){
    int x, y;
    if(n<10 && n>0){
        return n;
    }
x = n%10;
n = n / 10;
y =  x + sum(n);
return y;
}
int main(){
    int n,y;
    printf("enter the number :");
    scanf("%d",&n);

   y= sum(n);
   printf("%d",y);

   return 0;

}

