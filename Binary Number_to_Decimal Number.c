#include <stdio.h>
int main()
{
    long long binary;
    int decimal = 0;
    int remainder, base = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("Decimal number = %d\n", decimal);
    return 0;
}
