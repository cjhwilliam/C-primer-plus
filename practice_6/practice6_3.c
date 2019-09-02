#include<stdio.h>
int main(void){

    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    int cul;

    for (row = 5; row >= 0 ; row--){

        for(cul = 5; cul >= row; cul-- ){
            printf("%c",lets[cul]);

        }
        printf("\n");

    }
    return 0;
}
