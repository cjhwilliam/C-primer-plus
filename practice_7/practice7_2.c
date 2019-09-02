#include<stdio.h>

int main(void){

    printf("please enter something: \n\(quit by enter '#'\)\n");

    char ch;
    int count;
    count = 0;

    while((ch = getchar()) != '#'){
        printf("%c-%3d ",ch, ch);
        count++;
        if (!(count % 8))
            printf("\n");
    }

    printf("\ndone!\n");

    return 0;
}
