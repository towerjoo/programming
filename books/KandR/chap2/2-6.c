/*
page: 47
exercise: 2-6
date: 2013-01-11 15:19:03
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return (x | ~(~0 << n)) & (y | (~0 << n));
}

// Main Entry Point
int main(){
    unsigned a = 0x99;
    unsigned b = 0xf1;
    printf("%x %x %x\n", a, b, setbits(a, 3, 4, b));
    return 0;
}
