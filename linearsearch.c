//function for linear serach..39
#include<stdio.h>
int linearsearch(int arr[],int n,int key){
    int i;
    for(i=0;i<n;i++){
       if( arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d element",n);
    
        for(int i=0;i<n;i++)
    
   { scanf("%d",&arr[i]);
    }
    int key;
    printf("enter the element to be find : ");
    scanf("%d",&key);
    int position;
    position = linearsearch(arr,n,key);
    if(position != -1){
        printf("%d is found at position %d",key,position);
    }else
    {
        printf("%d is not foound",key);
    }
    return 0;
}


/*#include<stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Key found at index i
        }
    }
    return -1; // Key not found
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;

    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    int position = linearSearch(arr, n, key);

    if (position != -1) {
        printf("Key %d found at position %d.\n", key, position);
    } else {
        printf("Key %d not found in the array.\n", key);
    }
return 0;
}
/*#include<stdio.h>
int linearsearch(int arr[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        else {
            return -1;
        }
    }
}int main(){
    int n,i;
    printf("Enter the number :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    scanf("%d",&arr[i]);
    int key;
    printf("Enter the key to find");
    scanf("%d",&key);
int position;
   position = linearsearch(arr,n,key);
   if(position != -1){
    printf("key %d found at position %d \n",key,position);
   }
   else{
    printf("key %d not found in the array",key);
   }
   return 0;
}
*/



/*#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a[n],i,freq=0,key;
    for(i=0;i<n;i++){
        printf("\n Enter the number :");
        scanf("%d",&a[i]);
    }
    printf("\n Enter Number to find frequency");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    if(a[i]==key)
    freq++;
printf("frequency of %d is %d",key,freq);
return 0;
}*/