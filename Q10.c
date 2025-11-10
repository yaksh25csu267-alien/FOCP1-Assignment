#include <stdio.h>
int main() 
{
    int marks[]={99, 85, 92, 99, 78, 99, 90, 99};
    int size=sizeof(marks)/sizeof(marks[0]);
    int count=0;
    int target=99;

    for (int i=0;i<size;i++) 
    {
        if(marks[i]==target)
        count++;
    }
    printf("Students who scored %d: %d\n", target, count);

    for(int i=0;i<size;i++) 
    {
        if (marks[i]==target)
        printf("Student at index %d\n",i);
    }
    return 0;
}
