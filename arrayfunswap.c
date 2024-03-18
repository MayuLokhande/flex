#include<stdio.h>
void fun(int arr[]){
int t=arr[0];
arr[0]=arr[1];    //pasing a  array in function..
arr[1]=t;
    return;
}
int main(){
    int arr[]={2,8};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d ",arr[0],arr[1]);
    return 0;
}


