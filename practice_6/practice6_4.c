#include<stdio.h>
int main(void){
    int row;
    int cul;
    int num = 0;
    for (row = 0; row < 6; row++){
        num += row;
        for(cul = 0; cul <= row; cul++){
            printf("%c", 'A'+num+cul);

        }
        printf("\n");


    }

    return 0;
}
