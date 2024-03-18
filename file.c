/*#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("a66.c","w");
    if(fptr== NULL){
        printf("not exits");
    }else{
        fclose(fptr);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("a66.c","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("charactere is %c \n",ch);
    return 0;
}*/
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("a66","w");
    
    printf("%c\n",fgetc(fptr));
    //fprintf(fptr, "%c", 'm');
    //fprintf(fptr, "%c", 'a');
    //fprintf(fptr, "%c", 'n');
    //fprintf(fptr, "%c", 'g');
    fclose(fptr);
    return 0;
}