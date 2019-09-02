#include<stdio.h>
int is_within(char ch, char * pt);

int main(void)
{
    char ch = 0;
    char string[256];
    _Bool within = 0;

    while (ch != '#')
    {
        printf("please enter the string:\n");
        fgets(string, 256,stdin);
        printf("please enter the character:\n");
        ch = getchar();
        getchar();

        within = is_within(ch, string);
        if (within == 0)
            printf("character %c is not within %s\n", ch, string);
        else
            printf("character %c is within %s\n", ch, string);
    }
    printf("done!");

    return 0;
}

int is_within(char ch, char * pt)
{
    int i = 0;
    int string_length = strlen(pt);

    for(i = 0; i < string_length; i++ )
    {
        if (pt[i] == ch)
            return ( i + 1 );


    }

    return 0;
}
