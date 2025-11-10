#include <stdio.h>
#include <math.h>
long long binaryToDecimal(long long n) 
{
    long long decimal = 0, i = 0, remainder;
    while (n != 0) 
    {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}
long long decimalToBinary(int n) 
{
    long long binary = 0;
    int remainder, i = 1;
    while (n != 0) 
    {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main() 
{
    int choice;
    long long num;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &num);
            printf("Decimal equivalent: %lld\n", binaryToDecimal(num));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%lld", &num);
            printf("Binary equivalent: %lld\n", decimalToBinary(num));
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}
