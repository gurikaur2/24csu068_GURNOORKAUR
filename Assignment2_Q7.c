//WAP to check whether score is even or odd in an array.

#include<stdio.h>
int main()
{
    int i=0,stu;
    printf("No of students:");
    scanf("%d",&stu);
    int marks[stu];
    for(i=0;i<stu;i++)
    {
        printf("Enter marks of %d:",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<stu;i++)
    {
        if(marks[i]%2==0)
        {
            printf("Marks of %d is even\n",i);
        }  
        else
        {
            printf("Marks of %d is odd\n",i);
        }  
    }
    return 0;
}