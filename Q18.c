#include <stdio.h>
#include <stdlib.h>
void findAndPrintDuplicates(int arr[],int n) 
{
    if (n<=0) 
    {
        printf("-1\n");
        return;
    }

    int maxVal=0;
    for (int i=0;i<n;i++) 
    {
        if (arr[i]<0) 
        {
            printf("-1\n");
            return;
        }
        if (arr[i]>maxVal) 
        {
            maxVal=arr[i];
        }
    }

    int *frequency=(int *)calloc(maxVal+1,sizeof(int));
    if (frequency==NULL) 
    {
        printf("-1\n");
        return;
    }

    for (int i=0;i<n;i++)
        frequency[arr[i]]++;
    
    int foundDuplicate=0;
    for (int i=0;i<=maxVal;i++) 
    {
        if (frequency[i]>1) 
        {
            printf("%d ",i);
            foundDuplicate=1;
        }
    }
    if (!foundDuplicate)
        printf("-1");
    printf("\n");
    free(frequency);
}
int main() 
{
    int arr1[]={2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    findAndPrintDuplicates(arr1,n1);

    int arr2[]={5, 40, 1, 40, 100000, 1, 5, 1};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    findAndPrintDuplicates(arr2,n2);

    int arr3[]={1, 2, 3, 4, 5};
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    findAndPrintDuplicates(arr3,n3);

    int arr4[]={};
    int n4=sizeof(arr4)/sizeof(arr4[0]);
    findAndPrintDuplicates(arr4,n4);

    int arr5[]={-1, 2, 3};
    int n5=sizeof(arr5)/sizeof(arr5[0]);
    findAndPrintDuplicates(arr5,n5);
    return 0;
}
