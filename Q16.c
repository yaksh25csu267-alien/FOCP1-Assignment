#include <stdio.h>
void printArray(int arr[],int size) 
{
    int i;
    for (i=0;i<size;i++) 
        printf("%d ",arr[i]);

    printf("\n");
}

int main() 
{
    int arr[100];
    int size = 5;
    int elementToInsert;
    int position;
    int i;
    for (i=0;i<size;i++)
        arr[i]=(i+1)*10;
    
    printf("Array before insertion: ");
    printArray(arr, size);
    elementToInsert=99;
    position=1;

    if (position>=1 && position<=size+1) 
    {
        for (i=size;i>=position;i--)
            arr[i]=arr[i-1];
        
        arr[position-1]=elementToInsert;
        size++;
    }
    else
    printf("Invalid position for insertion.\n");
    
    printf("Array after insertion: ");
    printArray(arr, size);
    return 0;
}
