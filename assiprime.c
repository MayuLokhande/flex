#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the elements of set ");
    scanf("%d",&n);

    int set1[n];
    printf("Enter the elentes of st1 %d :",n);
    for( i=0;i<n;i++){
        scanf("%d",&set1[i]);
    }
    printf("enter the set2");
    scanf("%d",&m);

int set2[m];
printf("enter the eleiments of set2 %d",m);
for(i=0;i<m; i++){
    scanf("%d",&set2[i]);
}
printf("the union of two sets :");
for(i=0;i<n; i++){
    printf("%d",set1[i]);
}for(i=0; i<m; i++){
    int duplicate=0;
    for(j=0;j<n; j++){
if(set2[i] == set1[j]){
    duplicate=1;
    break;
}
    }if(!duplicate){
        printf("%d",set2[i]);
    }
    printf("\n");
}
printf("intersection of two sets");
for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        if(set1[i] == set2[j]){
            printf("%d",set1[i]);
        }
    }
    return 0;
}}