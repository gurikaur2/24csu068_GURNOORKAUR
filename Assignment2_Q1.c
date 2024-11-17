#include<stdio.h>
int main()
{
    int i;
  int marks[10];
  printf("Enter the marks of students \n");
  for (i=1;i<11;i++)
  {
    printf("Enter the marks for student %d=",i);
    scanf("%d",&marks[i]);
  }  
  printf("List of the marks:\n");
  for (i=1;i<11;i++)
  {
    marks[i]=marks[i]+5;
    printf("\n Marks of student %d=%d",i,marks[i]);
  }





    
    return 0;
}

