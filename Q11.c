#include <stdio.h>
int main() 
{
    int scores[]={10, 15, 22, 31, 40, 45, 50, 57, 60, 63};
    int n=sizeof(scores)/sizeof(scores[0]);
    int even_array[n];
    int odd_array[n];
    int even_count=0;
    int odd_count=0;

    for (int i=0;i<n;i++) 
    {
        if (scores[i] % 2 == 0) 
        {
            even_array[even_count]=scores[i];
            even_count++;
        } 
        else 
        {
            odd_array[odd_count]=scores[i];
            odd_count++;
        }
    }
    printf("Even scores: ");
    for (int i=0;i<even_count;i++) 
    {
        printf("%d ",even_array[i]);
    }
    printf("\n");
    printf("Odd scores: ");
    for (int i=0;i<odd_count;i++) 
    {
        printf("%d ",odd_array[i]);
    }
    printf("\n");
    return 0;
}
