#include<stdio.h>
#define MAX 20
char * s_gets(char * st, int n);

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("enter your first name:");
    s_gets(first, MAX);
    puts("enter your last name:");
    s_gets(last, MAX);
    puts("enter your prize money:");
    scanf("%d", prize);
    sprintf(formal, "%s, %-19s: $6d\n", last, first, prize);
    puts(formal);

    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    for(i = 0; i < n; i++)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] = '\n')
          st[i] = '\0';
        else
            while (getchar() != '\n')   //在ret_val的结尾读一个 \n 进来, 因为上面把 \n 换成 \0 了
                continue;
    }
    return ret_val;
}
