/*
page: 34
exercise: ex1-21
date: 2012-12-18 10:18:02
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define LINE_MAX_WIDTH 1000

// Main Entry Point
int main(){
    int n = 8;
    int c;
    int i;
    char chars[LINE_MAX_WIDTH];
    int nspace = 0;
    while((c=getchar()) != EOF) {
        if (c == '\n'){
            chars[i] = '\0';
            printf("%s\n", chars);
            i = 0; 
            nspace = 0;
        }
        else {
            chars[i] = c;
            if (c == ' ') 
                nspace ++;
            else 
                nspace = 0;
            
            if (nspace == n) {
                i -= n; 
                chars[++i] = '\t'; 
                nspace = 0;
            }
            i ++;
        }
    } 
    return 0;
}
