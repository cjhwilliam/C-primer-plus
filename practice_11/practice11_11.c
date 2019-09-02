#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 10
#define SLEN 256

char *s_gets(char * st, int n);

void showstring(char st[SIZE][SLEN], int num);
void showsour(char str[SIZE][SLEN], int num);
void showascii(char str[SIZE][SLEN], int num);
void showlen(char str[SIZE][SLEN], int num);
void showfirst(char str[SIZE][SLEN], int num);
int check_first_word_len(char st[SLEN]);
void quit();

int main(void)
{
    char string[SIZE][SLEN];
    int num = 0;
    char choice;
    printf("please enter your string:\n");
    for (int i = 0; i < 10; i++)
    {
        s_gets(string[i], SLEN);
        if (string[i][0] == '\0')
        {
            break;
        }
        num++;
    }
    while(1)
    {
        printf("a) print original string.             b) print string sorted by ascii\n");
        printf("c) print string sorted by string len  d) print string sorted by first word\n");
        printf("e) quit\n");
        printf("please enter your choice:");
        choice = getchar();
        choice = tolower(choice);
        getchar();

    switch(choice)
    {
    case 'a':
        showsour(string, num);
        break;
    case 'b':
        showascii(string, num);
        break;
    case 'c':
        showlen(string, num);
        break;
    case 'd':
        showlen(string, num);
        break;
    case 'e':
        quit();
    default:
        printf("please enter a-e:\n");
        break;
    }
    }

    return 0;

}

char *s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
       find = strchr(st, '\n');
       if (find)
            *find = '\0';
       else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

void showstring(char st[SIZE][SLEN], int num)
{
    size_t i;

    for (i = 0; i < num; i++)
    {
        printf("%d:", i + 1);
        puts(st[i]);
    }
    return ;
}

void showsour(char str[SIZE][SLEN], int num)
{
    static char *string[SIZE];
    static _Bool flag = 0;

    if(flag != 1)
    {
        for (size_t i = 0; i < num; i++)
            string[i] = str[i];
        flag = 1;
    }
    printf("now print the original string:\n");
    showstring(string, num);

    return ;
}

void showascii(char str[SIZE][SLEN], int num)
{
    static char *string[SIZE];
    static _Bool flag = 0;
    char *temp;

    if(flag != 1)
    {
        for (size_t i = 0; i < num; i++)
            string[i] = str[i];

        for (int top = 0; top < num - 1; top++)
        {
            for (int seek = top + 1; seek < num; seek++)
            {
                if (strcmp(string[top], string[seek]) > 0)
                {
                    temp = string[top];
                    string[top] = string[seek];
                    string[seek] = temp;
                }
            }
        }

        flag = 1;
    }
    printf("now print the ascii string:\n");
    showstring(string, num);

    return ;
}

void showlen(char str[SIZE][SLEN], int num)
{
    static char *string[SIZE];
    static _Bool flag = 0;
    char * temp;

    if (flag != 1)
    {
        for (size_t i = 0; i < num; i++)
            string[i] = str[i];

        for (int top = 0; top < num - 1; top++)
        {
            for (int seek = top + 1; seek < num; seek++)
            {
                if (strlen(string[top]) < strlen(string[seek]))
                {
                    temp = string[top];
                    string[top] = string[seek];
                    string[seek] = temp;
                }
            }
        }
        flag = 1;
    }
    printf("now print the string sorted by length:\n");
    showstring(string, num);

    return ;
}

int check_first_word_len(char st[SLEN])
{
    int wlen = 0;
    int slen = strlen(st);

    for (size_t i = 0; i < slen; i++)
    {
        if (isspace(st[i]))
            return i;
    }
    return slen;
}

void showfirst(char str[SIZE][SLEN], int num)
{
    static char *string[SIZE];
    static _Bool flag = 0;
    char * temp;

    if (flag != 1)
    {
        for (size_t i = 0; i < num; i++)
            string[i] = str[i];

        for (int top = 0; top < num - 1; top++)
        {
            for (int seek = top + 1; seek < num; seek++)
            {
                if (check_first_word_len(string[top]) < check_first_word_len(string[seek]))
                {
                    temp = string[top];
                    string[top] = string[seek];
                    string[seek] = temp;
                }
            }
        }
        flag = 1;
    }
    printf("now print the string sorted by the first word length:\n");
    showstring(string, num);

    return ;
}

void quit()
{
    printf("done and quit!\n");
    exit(0);
}
