#include <stdio.h>
int PeakElement(int arr[],int n) 
{
    int low=0;
    int high=n-1;

    while (low<=high) 
    {
        int mid=low+(high-low)/2;

        if ((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
        return arr[mid];
        else if (mid>0 && arr[mid-1]>arr[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main() 
{
    int arr[]={1, 2, 3, 4, 5, 4, 3, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int peak=PeakElement(arr,n);
    printf("A peak element is: %d\n",peak);
    return 0;
}
