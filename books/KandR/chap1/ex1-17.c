/*
page: 31
exercise: ex1-17
date: 2012-12-18 10:17:33
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define MAX_LINE_LEN 1000
#define BORDER 80

// Main Entry Point
int main(){
    int c;
    char chars[MAX_LINE_LEN];
    int i = 0;
    while((c=getchar()) != EOF){
        if (c == '\n'){
            chars[i] = c;
            chars[++i] = '\0';
            if (i > BORDER) {
                printf("%d: %s", i-1, chars);
            }
            i = 0; 
        }
        else {
            // we don't check the max length here
            chars[i++] = c;
        }
    }
    return 0;
}
