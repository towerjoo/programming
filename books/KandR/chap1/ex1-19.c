/*
page: 31
exercise: ex1-19
date: 2012-12-18 10:17:42
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define MAX_LINE_LEN 1000

void reverse(char s[]);

// Main Entry Point
int main(){
    char c;
    char line[MAX_LINE_LEN];
    int i = 0;
    while((c=getchar()) != EOF){
        if (c == '\n') {
            line[i] = '\0';
            reverse(line);
            printf("%s\n", line);
            i = 0;
        }
        else {
            line[i] = c;
            i ++;
        }
    }
    return 0;
}

void reverse(char s[]){
    int len = 0;
    int i, j;
    char c;
    while(s[len++] != '\0');
    len --;
    i = len / 2;
    j = len;
    while(j > i){
        c = s[j-1];
        s[j-1] = s[len-j];
        s[len-j] = c;
        j --;
    }
}
    
