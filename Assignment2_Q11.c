//WAP to implement Insert -Front, any position in between & end in an array. Print the array before insert & after insert.

#include<stdio.h>
int main()
{
    //insertion at any postion
    int i=0,m,ind,size;//m is element to be inserted
    int marks[50]={12,23,34,45,67};
    printf("Array before insertion\n");
    for(i=0;i<5;i++)
    {
        printf("\n %d",marks[i]);
    }
    /*m=16;
    ind=2;
    size=5;
    for(i=size-1;i>=ind;i--)
    {
        marks[i+1]=marks[i];
    }
    marks[ind]=m;
    printf("Array after insertion\n");
    for(i=0;i<6;i++)
    {
    printf("%d \n",marks[i]);
    }*/
    
    
    // insertion in front
   /* m=16;
    size=5;
    for(i=size-1;i>=0;i--)
    {
        marks[i+1]=marks[i];
    }
    marks[ind]=m;
    printf("Array after insertion\n");
    for(i=0;i<6;i++)
    {
    printf("%d \n",marks[i]);
    }*/
    
    
    //insertion at end
    m=16;
    size=5;
    
    marks[size]=m;
    printf("Array after insertion\n");
    for(i=0;i<6;i++)
    {
    printf("%d \n",marks[i]);
    }

    return 0;
    
}