#include<stdio.h>

int search(char * st, char ch);

int main(void)
{
    char * string = "i am a boy!";
    char ch = 'z';
    int address;
    address = search(string, ch);
    printf("the pointer is %d", address);

    return 0;
}

int search(char * st, char ch)
{
    int i = 0;

    while (*(st + i) != '\0')
        if (*(st + i) == ch)
            return ( i + 1 );
        else
            i++;

    return NULL;
}
