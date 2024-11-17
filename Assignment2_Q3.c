// WAP to find who scored first “99” in an array marks.

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
        if(marks[i]==99)
        {
            printf(" First Student with 99 marks: %d\n",i);
            break;
        }
    }
    return 0;
}