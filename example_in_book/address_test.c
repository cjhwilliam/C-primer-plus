#include<stdio.h>

int main(void)
{
    char ar[] = {"i love tom!"};
    char *pt = "i love tom!";
    printf("%s and %p and %p\n",pt, pt, &pt);
    printf("%s and %p and %p\n",ar, ar, &ar);
    printf("%c and %p and %p\n",ar[0], &ar[0], &ar[0]);
    printf("%p", "i love tom!");

    return 0;
}
