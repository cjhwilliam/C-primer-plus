#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;

    printf("give me a letter of the alphabet, and i will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch)
        {
        case 'a':
            printf("argali\n");
            break;
        case 'b':
            printf("babirusa\n");
            break;
        case 'c':
            printf("coati\n");
            break;
        default:
            printf("that's a stumper!\n");
        }
        else
            printf("i recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;              /*跳过输入行的剩余部分*/
        printf("please type another letter or a #.\n");
    }                             //while循环结束
    printf("bye!\n");

    return 0;
}
