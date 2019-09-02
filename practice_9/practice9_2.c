#include<stdio.h>
void chline(char ch, int j, int i);

int main(void)
{
    int x, y;
    char z;

    printf("please enter a character:\n");
    //z = getchar();
    while ((z = getchar()) != '|')
    {

        printf("please enter the row and the column:\n");
        scanf("%d %d", &x, &y);
        chline(z, x, y);
        printf("please enter a character:\n");
        z = getchar();
    }

    printf("done!\n");

    return 0;
}

void chline(char ch, int j, int i)
{
    int n, m;
    for (n = 1; n <= j; n++)
    {
        for (m = 1; m <= i; m++)
            putchar(ch);
        printf("\n");
    }
    printf("how beautiful!\n");
}
