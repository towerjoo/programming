/*
page: 24
exercise: ex1-13
date: 2012-12-18 10:16:49
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define IN 0 // inside a word
#define OUT 1 // outside a word

#define MAX_WORD_LEN 10


void printlen(char mark, int len){
    int i;
    for(i=0; i<len; i++)
        putchar(mark);
}


void horizontal(){
    int c;
    int state = OUT;
    int len=0;
    int lens[MAX_WORD_LEN+1] = {0};
    int i;

    while((c=getchar()) != EOF){
        if (c == ' '|| c == '\t' || c == '\n'){
            if (state == IN){
                if (len > MAX_WORD_LEN) 
                    lens[MAX_WORD_LEN] ++;
                else
                    lens[len-1] ++;
                len = 0;
            }
            state = OUT;
        }
        else {
            state = IN;
            len ++;
        }
    }
    for(i=0; i<MAX_WORD_LEN; i++)
    {
        printf("%3d | ", i+1);
        printlen('*', lens[i]);
        putchar('\n');
    }
    printf(">%2d | ", MAX_WORD_LEN);
    printlen('*', lens[i]);
    putchar('\n');
}

void vertical(){
    int c;
    int state = OUT;
    int len=0;
    int lens[MAX_WORD_LEN+1] = {0};
    int i, j;
    int maxlen = 0;

    while((c=getchar()) != EOF){
        if (c == ' '|| c == '\t' || c == '\n'){
            if (state == IN){
                if (len > MAX_WORD_LEN) 
                    lens[MAX_WORD_LEN] ++;
                else
                    lens[len-1] ++;
                if (len > maxlen) maxlen = len;
                len = 0;
            }
            state = OUT;
        }
        else {
            state = IN;
            len ++;
        }
    }
    for(j=0; j<maxlen; j++){
        printf("%3d | ", maxlen-j);
        for(i=0; i<=MAX_WORD_LEN; i++){
           printf(" %c ", (lens[i] >= maxlen - j) ? '*' : ' '); 
        }
        putchar('\n');
    }
    printf("    + ");
    for(i=0; i<=MAX_WORD_LEN; i++){
        printf(" %c ", '-'); 
    }
    putchar('\n');
    printlen(' ', 6);
    for(i=0; i<MAX_WORD_LEN; i++){
        printf("%2d ", i+1); 
    }
    printf(">%2d ", MAX_WORD_LEN);
    putchar('\n');
}

// Main Entry Point
int main(){
    //horizontal();
    vertical();
    return 0;
}
