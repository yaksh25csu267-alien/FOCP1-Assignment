#include <stdio.h>
void rotateArray(int arr[],int n) 
{
    int lastElement=arr[n-1];
    for (int i=n-1;i>0;i--)
        arr[i] = arr[i - 1];
    
    arr[0]=lastElement;
}

int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array 1: ");
    for (int i=0;i<n1;i++) 
        printf("%d ",arr1[i]);
    
    printf("\n");
    rotateArray(arr1, n1);
    printf("Rotated array 1: ");
    for (int i=0;i<n1;i++) 
        printf("%d ",arr1[i]);
    
    printf("\n");

    int arr2[] = {2, 3, 4, 5, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Original array 2: ");
    for (int i=0;i<n2;i++)
        printf("%d ",arr2[i]);
    
    printf("\n");
    rotateArray(arr2,n2);
    printf("Rotated array 2: ");
    for (int i=0;i<n2;i++)
        printf("%d ",arr2[i]);

    printf("\n");
    return 0;
}
