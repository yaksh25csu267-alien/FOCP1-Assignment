#include <stdio.h>
int main() 
{
    int scores[]={85, 92, 99, 78, 99, 65, 90};
    int size=sizeof(scores)/sizeof(scores[0]);
    int target=99;
    int foundIndex=-1;

    for (int i = 0; i < size; i++) 
    {
        if(scores[i]==target) 
        {
            foundIndex=i;
            break;
        }
    }

    if(foundIndex!=-1)
    printf("Score %d found at index: %d\n",target,foundIndex);

    else
    printf("Score %d not found in the array.\n",target);
    return 0;
}
