#include<stdio.h>
#define SIZE 26
int main(void){

    char letter[SIZE];
    int index;
    int i = 1;
    for(index = 0; index < SIZE; index++){
        letter[index] = 'a' + index;
        printf("%c", letter[index]);
    }
    //while (i <= SIZE){

        //printf("%c", letter[i-1]);
        //i++;
    //}
    return 0;
}
