#include <stdio.h>
#include <string.h>
#define LEN 10

int string_in(char *, char *);
char *s_gets(char * st, int n);

int main(void)
{
    char string1[LEN];
    char string2[LEN];
    while (1)
    {
        printf("please enter the first string:\n");
        s_gets(string1, LEN);
        printf("please enter the second string:\n");
        s_gets(string2, LEN);
        printf("%s and %s\n",string1, string2);

        int address = string_in(string1, string2);
        if (NULL == address)
            printf("%s is not in the %s\n", string2, string1);
        else
            printf("%s is in the %s, address:%d\n", string2, string1, address);
    }

    return 0;
}

int string_in(char * str1, char * str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i;
    int j;

    for(i = 0; i < len1; i++)
    {
        int flag = i;
        int j = 0;
        while (str1[flag] == str2[j])
        {
            flag++;
            j++;
            if (j >= len2)
                return i + 1;
        }
    }
    return NULL;
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
