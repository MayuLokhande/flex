/*#include <stdio.h>
#include <stdlib.h>
struct person {
   int age;
   float weight;
   char name[30];
};

int main()
{
   struct person *ptr;
   int i, n;

   printf("\n\nEnter the number of persons: ");
   scanf("%d", &n);

   // allocating memory for n numbers of struct person
   ptr = (struct person*) malloc(n * sizeof(struct person));

   for(i = 0; i < n; ++i)
   {
       printf("Enter first name and age respectively: ");

       // To access members of 1st struct person,
       // ptr->name and ptr->age is used

       // To access members of 2nd struct person,
       // (ptr+1)->name and (ptr+1)->age is used
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }
   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

   return 0;
}*/
#include<stdio.h>
#include<string.h>
struct address{
    int age;
    char address[100];
    char name[100];
};
void adress(struct address s1);
int main(){
    struct address s1;

    printf("enter the detail of 1 person :");
    scanf("%d", &s1.age);
    scanf("%s", &s1.name);
    scanf("%s",&s1.address);

    printf("enter the detail of 2 person :");
    scanf("%d", &s1.age);
    scanf("%s", &s1.name);
    scanf("%s",&s1.address);
    adress(s1);
   //adress(s1[1]);
    return 0;
}
void adress(struct address s1){
    printf("(%d , %s , %s )",s1.age, s1.name, s1.address);
}
