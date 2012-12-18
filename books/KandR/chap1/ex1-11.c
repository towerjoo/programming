/*
page: 21
exercise: ex1-11
date: 2012-12-18 10:16:30
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define IN 0    // out a word
#define OUT 1   // In a word

/*
 possible issues:
 1. int overflow
 2. 
*/

// Main Entry Point
int main(){
    int c;
    int state = OUT;
    int nwords = 0;
    int nlines = 0;
    int nchars = 0;
    while((c=getchar()) != EOF){
        nchars ++;
        if (c == '\n') nlines ++;
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){ 
                nwords ++; 
            }
            state = OUT;
        }
        else state = IN;
    }
    printf("count of words: %d\n", nwords);
    printf("count of lines: %d\n", nlines);
    printf("count of characters: %d\n", nchars);
    return 0;
}
