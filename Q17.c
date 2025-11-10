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
    int size, i, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements into the array: ");
    for (i=0;i<size;i++) 
        scanf("%d",&arr[i]);
    
    printf("Array before deletion: ");
    printArray(arr, size);
    printf("Enter the position to delete (0 for front, %d for end, or any index in between): ", size - 1);
    scanf("%d", &position);
    if (position<0 || position>=size)
    printf("Invalid position for deletion.\n");

    else 
    {
        for (i=position;i<size-1;i++)
            arr[i]=arr[i+1];
        size--;

        printf("Array after deletion: ");
        printArray(arr,size);
    }
    return 0;
}
