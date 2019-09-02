#include<stdio.h>
#define ROWS 6
int main(void){

    int row;
    int sp;
    int cul;

    for (row = 0; row < ROWS; row++){

        for (sp = ROWS; sp > row ; sp--)
            printf(" ");

        for (cul = 0; cul <= row; cul++)
            printf("%c", 'A' + cul);

        for (cul = sp - 1; cul >= 0; cul--)
            printf("%c",'A' + cul);
        printf("\n");
    }

    return 0;
}
