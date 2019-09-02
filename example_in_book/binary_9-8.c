#include<stdio.h>
void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("enter an integer (q to quit):\n");
    }
    printf("done!\n");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');

    return;
}
