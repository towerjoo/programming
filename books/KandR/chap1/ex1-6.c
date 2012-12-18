/*
page: 17
exercise: ex1-6
date: 2012-12-18 10:04:11
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>


// Main Entry Point
int main(){
    int c;
    int t;
    while(1){
        t = getchar();
        c = t != EOF;
        printf("%d\n", c);
        if (t == EOF) break;
    }
    return 0;
}
