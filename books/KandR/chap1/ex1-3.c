/*
page: 13
exercise: ex1-3
date: 2012-12-18 09:53:17
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

// C = (5/9)(F-32)

// Main Entry Point
int main(){
    float fahr = 0;
    printf("Fahr Celsius\n");
    for(;fahr <= 100; fahr += 20)
        printf("%4.0f %7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}
