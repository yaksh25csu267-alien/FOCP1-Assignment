#include <stdio.h>
int subtract(int x,int y) 
{
    while (y!=0) 
    {
        int borrow=(~x)&y;
        x=x^y;
        y=borrow<<1;
    }
    return x;
}
int main() 
{
    int num1,num2;
    printf("Enter two nos: ");
    scanf("%d%d",&num1,&num2);
    printf("Result of %d-%d is %d.\n",num1,num2,subtract(num1,num2));
    return 0;
}
