#include<stdio.h>
int main()
{
    int a,b,A,sum=0;
    printf("Enter any number : ");
    scanf("%d",&a);
    A=a;
    while (a>0)
    {
        b=a%10;
        b=b*b*b;  
        sum=sum+b;
        a=a/10;
    }
    printf("Sum of cube of entered number : %d\n",sum);
    if (sum==A)
    printf("Hence, entered number is an armstrong number.");
    else
    printf("Hence, entered number is not an armstrong number.");
}
