#include<stdio.h>
#include<ctype.h>
int report(char c);

int main(void){

    int ch;

    while ((ch = getchar()) != EOF)
    {
        int i;
        i = report(ch);
        //putchar(ch);
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

int report(char c)
{
    char chh;
    int n;

    if(isalpha(c))
    {
        chh = tolower(c);
        n = chh - 'a' + 1;
    }
    else
    {
        if (c != EOF)
            n = -1;
    }

    return n;
}
