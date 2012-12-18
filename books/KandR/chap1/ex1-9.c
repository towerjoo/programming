/*
page: 20
exercise: ex1-9
date: 2012-12-18 10:15:58
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define OUT 1   // Out of blanks
#define IN 0    // In Blanks

// Main Entry Point
int main(){
    int c;
    int state=OUT;
    while((c=getchar()) != EOF){
        if (c == ' ')
            state = IN;
        else{
            if (state == IN){   // from In to OUT
                state = OUT;
                putchar(' ');
            }
            putchar(c);
        }
    }
    return 0;
}
