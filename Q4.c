#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two nos: ");
    scanf("%d%d",&a,&b);

    t=a;a=b;b=t;
    printf("%d %d\n",a,b);

    a=a+b;b=a-b;a=a-b;
    printf("%d %d\n",b,a);

    a=a^b;b=a^b;a=a^b;
    printf("%d %d\n",a,b);

    int *q=&a,*p=&b;t=*q;*q=*p;*p=t;
    printf("%d %d",b,a);
    return 0;
}
