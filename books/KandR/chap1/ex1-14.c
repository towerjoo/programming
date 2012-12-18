/*
page: 24
exercise: ex1-14
date: 2012-12-18 10:16:54
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define CHARS_NUM 256

// Main Entry Point
int main(){
    int i, j;
    int chars[CHARS_NUM] = {0};
    int c;

    while((c=getchar()) != EOF){
        chars[c] ++;
    }
    
    for(i=0; i<CHARS_NUM; i++){
        if (chars[i] == 0) continue;
        printf("%3c | ", i);
        for(j=0; j<chars[i]; j++)
            putchar('*');
        putchar('\n');
    }  
    return 0;
}
