#include<stdio.h>
void mikado(int);
int main(void)
{
    int pooh = 2, bah = 5;

    printf("in main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("in main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);

    return 0;
}

void mikado(int bah)
{
    int pooh = 10;

    printf("in main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("in main(), bah = %d and &bah = %p\n", bah, &bah);
}