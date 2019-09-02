#include<stdio.h>

int main(void){

    printf("please enter something: \n\(quit by enter '#'\)\n");

    char ch;
    int s_cou, n_cou, c_cou;
    s_cou = n_cou = c_cou = 0;
    while ((ch = getchar()) != '#'){
        if (ch == ' ')
            s_cou++;
        else if (ch == '\n')
            n_cou++;
        else
            c_cou++;
    }
    printf("space = %d, enter = %d, characters = %d\n",s_cou, n_cou, c_cou);
    printf("done!\n");

    return 0;
}
