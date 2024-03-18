#include<stdio.h>
#include<string.h>
struct student
{
    int id;
   double name;
};
int main(){
    struct student mayura;
    mayura.id=2;
    //mayura.name="mayura";
    printf("maura id %d",mayura.id);
    //printf("mayura name %lf",mayura.name);
    return 0;
}