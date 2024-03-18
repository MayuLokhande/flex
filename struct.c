#include<stdio.h>
#include<string.h>

typedef struct student{
    int roo_no;
    char name[100];
    float ggpa;
}s;
int main(){
    s s1;
    s1.roo_no=4587;
    strcpy(s1.name,"mayura");
    s1.ggpa=12.11;
    printf("%d\n",s1.roo_no);
    printf("%s\n",s1.name);
    printf("%f\n",s1.ggpa);
    return 0;
}
/*void input(struct student s1){
    printf("name %s\n",s1.name);
    printf("%d\n",s1.roo_no);

}
int main(){
    struct student s1;
    s1.roo_no=4451;
    struct student *ptr=&s1;   //pointer...
 strcpy(s1.name, "mayura");
 input(s1);
 s1.ggpa=78.2;
printf("roll no %d\n",s1.roo_no);
 printf("the name is %s\n",s1.name); 
 printf("the ggpa is %f\n",(*ptr).ggpa);
 printf("tyhe rllno is %d\n",ptr->roo_no);
 printf("nmae is %s\n",ptr->name);
 return 0;  
}*/