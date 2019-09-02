#include<stdio.h>

int main (void){

    char word[10];
    printf("please enter a word:\n");
    int i;

    scanf("%s",word);

    for(i = strlen(word)-1; i >= 0; i--)
        printf("%c",word[i]);

    printf("\n");
    printf("done!");

    return 0;
}
