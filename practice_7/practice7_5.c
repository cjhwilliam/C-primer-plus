#include<stdio.h>

int main(void){

    char ch;
    int count = 0;

    while ((ch = getchar()) != '#'){
        if ('\n' == ch)
            continue;
        switch (ch)
        {
        case '.':
            {   ch = '!';
                printf("%c", ch);
                count++;
                break;
            }
        case '!':
            {
                ch = !
                printf("%c!",ch);
                count++;
                break;
            }
        default:
            printf("%c", ch);
        }
        }
        printf("you have change %d times\n", count);
        printf("bye!\n");

        return 0;

    }


