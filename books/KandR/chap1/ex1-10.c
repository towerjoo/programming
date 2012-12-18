/*
page: 20
exercise: ex1-10
date: 2012-12-18 10:16:07
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>


// Main Entry Point
int main(){
    int c;
    while((c=getchar()) != EOF){
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b'){
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else putchar(c);
    }
    return 0;
}
