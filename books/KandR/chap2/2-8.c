/*
page: 47
exercise: 2-8
date: 2013-01-11 15:49:21
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

unsigned rightrot(unsigned x, int n) {
   return (x >> n) | (x << 8 * sizeof(unsigned) - n) ;
}

// Main Entry Point
int main(){
    unsigned a = 0x99;
    printf("%x is %x\n", a, rightrot(a, 4));
    return 0;
}
