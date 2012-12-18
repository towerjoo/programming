/*
page: 21
exercise: ex1-12
date: 2012-12-18 10:16:35
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define IN 0 // inside a word
#define OUT 1 // outside a word

// Main Entry Point
int main(){
    int c;
    int state = OUT;
    while((c=getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                state = OUT;
                putchar('\n');
            }
        }
        else {
            state = IN;
            putchar(c);
        }
    }
    return 0;
}
