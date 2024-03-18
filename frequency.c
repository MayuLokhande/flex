// 38 fequency...
#include<stdio.h>
int main(){
    int n,i,key,freq=0;
printf("Enter the value of n:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    printf("Enter the numbers of elemrnrtd");
    scanf("%d",&arr[i]);}

    printf("Enter the number to be find :");
    scanf("%d",&key);
    for(i=0;i<n;i++)
       if( arr[i]==key)
        freq++;
    printf("The frequency of an number %d is %d :",key,freq);
    return 0;
}

/*
#include<stdio.h>
int main(){
    int a[25],i,freq=0,key;
    for(i=0;i<25;i++){
        printf("\n Enter teh number :");
        scanf("%d",&a[i]);
    }
    printf("\n Enter Number to find frequency");
    scanf("%d",&key);
    for(i=0;i<25;i++)
    if(a[i]==key)
    freq++;
printf("frequency of %d is %d",key,freq);
return 0;
}*/





/*#include<stdio.h>
int main(){
    int i,n;
    int frequency[25]={0};
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the numbers in the rang of 1 to 25");
   for(i=0;i<n;i++){
        int num;
        printf("Enter the number %d",i+1);
        scanf("%d",&num);
        if(num>=1 && num<=25)
        {
            frequency[num-1]++;
        }
        else{
            printf("Number is out of the range");
            --i;
        }
    }
    printf("Frequency of each number");
    for(i=0;i<25;i++){
        printf("number %d: %d\n",i+1,frequency[i]);

    }
    return 0;
}*/