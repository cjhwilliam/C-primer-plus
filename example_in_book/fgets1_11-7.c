#include<stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];

    puts("enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("done.");

    return 0;

}
