#include<stdio.h>
int main()
{
    int a[50],b,c,flag,n,count=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);
    for(b=0;b<n;b++)
    {
      scanf("%d",&a[b]);
    }
    printf("\n");
    for(b=0;b<n;b++)
    {
       flag=1;
       for(c=2;c<=a[b]/2;c++)
       {
          if(a[b]%c==0)
          {
             flag=0;
             break;
          } 
       }
       if(flag==1 && a[b]!=1)
       {
           printf("%d ",a[b]);
           count++;
       }
    }
    printf("\nTotal prime numbers in array:%d",count);
}
