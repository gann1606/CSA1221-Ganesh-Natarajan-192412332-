#include <stdio.h>
int main()
{
    long long binary;
    int decimal = 0, remainder;
    int base = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("Hexadecimal number = ");

    if (decimal == 0)
    {
        printf("0");
    }
    else
    {
        char hex[20];
        int i = 0;

        while (decimal > 0)
        {
            remainder = decimal % 16;

            if (remainder < 10)
                hex[i] = remainder + '0';
            else
                hex[i] = remainder - 10 + 'A';
            decimal = decimal / 16;
            i++;
        }
        while (i > 0)
        {
            i--;
            printf("%c", hex[i]);
        }
    }
    printf("\n");

    return 0;
}
