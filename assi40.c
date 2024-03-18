/*#include<stdio.h>
int count(int arr[],int n,int key){
    int occurence;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            occurence++;
        }
    }return occurence;
}int main(){
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements",n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int key;
    printf("Enter the number to be search :");
    scanf("%d",&key);
   int occurence=count(arr,n,key);
   occurence++;
   printf("the occurencce of %d is %d",key,occurence);
   return 0;
}*/

#include<stdio.h>
int occurence(int arr[],int n,int key){
    int occurence =0;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            occurence++;
        }}
    return occurence;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the %d",n);
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
int key;
printf("enter the no to be find ");
scanf("%d",&key);

    int occur = occurence(arr,n,key);
    

    printf("%d is %d",key,occur);
    return 0;
}