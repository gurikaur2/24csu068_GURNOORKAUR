// WAP to find Who & how many students have scored 99 in an array Marks.

#include<stdio.h>
int main()
{
    int i=0,total=0,stu;
    printf("No of students:");
    scanf("%d",&stu);
    int marks[stu];
    for(i=0;i<stu;i++)
    {
        printf("Enter marks of %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<stu;i++)
    {
        if(marks[i]==99)
        {
            printf("Student with 99 marks: %d\n",i);
            total=total+1;
        }
    }
    printf("Total students with 99 marks: %d\n",total);
    return 0;
}