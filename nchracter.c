//31. Write a function, which accepts a character and 
//integer n as parameter and displays the next n characters

#include <stdio.h>
void even(char ch,int n)
{
  int i;
  for(i=0;i<n;i++){
printf("%c",ch++);}
}
int main(){
  int n;
  char ch;
  printf("Enter the number and acharacter");
    scanf("%d %c",&n,&ch);
  even(ch,n);
  return 0;
}
