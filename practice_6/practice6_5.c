#include<stdio.h>
#define ROWS 5
int main(void){

    int row;
    int cul;

    for (row = 0; row < ROWS; row++){

        for (cul = 0; cul <= row; cul++)
            printf("$");

        printf("\n");
    }

    return 0;
}
