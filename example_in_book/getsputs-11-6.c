#include<stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];

    puts("enter a string, please.");
    gets(words);    //µ‰–Õ”√∑®
    printf("your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("done.");

    return 0;

}
