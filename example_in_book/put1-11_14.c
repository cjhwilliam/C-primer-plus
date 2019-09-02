#include<stdio.h>
void put1(const char * string);
int put2(const char * string);

int main(void)
{
    put1("if i'd as much money");
    put1("as i could spend,\n");
    printf("i count %d characters.\n",
           put2("i never would cry old chairs to mend."));

    return 0;
}

void put1(const char * string)
{
    while (*string != '\0')
        putchar(*string++);
}

int put2(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); //不统计换行符

    return (count);
}
