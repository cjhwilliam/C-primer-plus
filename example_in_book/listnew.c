#include<stdio.h>
#include<string.h>
#define SIZE 100
int main(){
    int m;
    int list[SIZE];

    scanf("%d",&m);
    char mis[6];

    while(m--){
        //char mis[6];
        int value;
        int i = 0;
        scanf("%s %d",mis, &value);
        if(mis[0]=='a'){
            list[i] = value;
            i++;
        }
        else if(mis[0]=='p')
            list[i] = '\0';
            i--;
        else{
            int i;
            scanf("%d",&i);
            if(i<0){
                printf("%s\n",LIST[size+i].value);
            }
            else
                printf("%s\n",LIST[i-1].value);
        }
    }
}

