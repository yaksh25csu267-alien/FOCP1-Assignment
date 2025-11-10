#include <stdio.h>
int main() 
{
    int scores[]={85, 92, 78, 95, 64, 88, 76, 91, 89};
    int n=sizeof(scores)/sizeof(scores[0]);
    int max=scores[0];
    int min=scores[0];
    int i;

    for (i=1;i<n;i++) 
    {
        if(scores[i]>max)
        max=scores[i];
        
        if(scores[i]<min)
        min=scores[i];
    }
    printf("Maximum score: %d\n",max);
    printf("Minimum score: %d\n",min);
    return 0;
}
