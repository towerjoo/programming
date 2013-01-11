/*
page: 47
exercise: 2-7
date: 2013-01-11 15:49:15
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

unsigned invert(unsigned x, int p, int n) {
    return x ^ (~(~0 << n) << (p+1-n));
}

// Main Entry Point
int main(){
    int a = 0x99;
    printf("%x is %x\n", a, invert(a, 4, 3));
    return 0;
}
