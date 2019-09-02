#include <stdio.h>
#include <string.h>
#define LEN 20
char * delspace(char * st);
char *s_gets(char * st, int n);

int main(void)
{
    char * string[LEN];
    char * str[LEN] = {0};
    printf("please enter your string:\n");
    while (s_gets(string, LEN) != NULL && string[0] != '\0')
    {
        //delspace(string);
        printf("now is %s\n", delspace(string));
        printf("please enter your string:\n");
    }
    return 0;
}

char * delspace(char * st)
{
    char * stt = st;
    int len = strlen(st);
    int i;
    int flag = 0;

    for (i = 0; i < len; i++)
    {
        if (st[i] == ' ')
        {
            flag++;
            continue;
        }
        else
            stt[i - flag] = st[i];   //其实这里可以直接用st[flag++] = st[i]， 因为只用不执行continue的时候，flag才会计数
    }
    stt[len - flag] = '\0';
    printf("no space :%s\n", stt);
    //st = stt;
    return stt;
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
