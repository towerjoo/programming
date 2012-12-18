/*
page: 14
exercise: ex1-5
date: 2012-12-18 10:03:54
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>


// Main Entry Point
int main(){
    float fahr=300;
    printf("Fahr Celsius\n");
    for(;fahr >= 0; fahr -= 20)
        printf("%4.0f %7.1f\n", fahr, (5. / 9.) * (fahr - 32));
    return 0;
}
