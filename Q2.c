#include<stdio.h>
int main()
{
    int a,b,h,c;
    printf("Enter any two nos : ");
    scanf("%d%d",&a,&b);
    
        for(h=1;h<=a&&h<=b;h++)
        {
            if(a%h==0 && b%h==0)
            c=h;
        }
         printf("HCF=%d",c);   
}
