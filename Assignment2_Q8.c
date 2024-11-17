//WAP to find maximum & minimum score in the Marks array.

#include<stdio.h>
int main()
{
    int i=0,max,min,stu;
    printf("No of students:");
    scanf("%d",&stu);
    int marks[stu];
    for(i=0;i<stu;i++)
    {
        printf("Enter marks of %d:",i);
        scanf("%d",&marks[i]);
    }
    max=marks[0];
    min=marks[0];
    for(i=0;i<stu;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
            
        }  
        else if(marks[i]<min)
        {
            min=marks[i];
        }  
    }
    printf("Maximum marks =%d\n",max);
    printf("Minimum marks =%d\n",min);
    return 0;
}