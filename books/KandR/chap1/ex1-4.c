/*
page: 13
exercise: ex1-4
date: 2012-12-18 09:53:28
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

// C = (5/9)(F-32)
// F = (9/5)C + 32

// Main Entry Point
int main(){
    float cels;
    printf("Celsius Fahr\n");
    while(cels <= 100){
        printf("%7.0f %3.1f\n", cels, (9. / 5.) * cels + 32.);
        cels += 20;
    }
    return 0;
}
