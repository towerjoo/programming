/*
page: 48
exercise: 2-9
date: 2013-01-11 16:17:27
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

/*
Explain:
    assume position p is the rightmost(lowest) 1 bit for x,
    after minus 1, x-1's bits between [p+1, 0], will be complement
    to x's bits between [p+1, 0), after x & (x-1)
    x's [p+1, 0] will all be set to 0, i.e set the rightmost 1 to 0
*/
    

int bitcount(unsigned x) {
    int i = 0;
    while(x &= (x-1)) i++;
    return i+1;
}

// Main Entry Point
int main(){
    unsigned a = 0xff;
    printf("count of 1bit in %x is %d\n", a, bitcount(a)); 
    return 0;
}
