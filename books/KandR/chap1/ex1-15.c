/*
page: 27
exercise: ex1-15
date: 2012-12-18 10:17:04
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define LOW 0
#define HIGH 300
#define STEP 20

float fahr2cel(float);
float cel2fahr(float);

// Main Entry Point
int main(){
    float f, c;
    printf("Fahr Cel\n");
    for(f=0; f<=HIGH; f+= STEP)
        printf("%3.0f %3.1f\n", f, fahr2cel(f));
    putchar('\n');

    printf("Cel Fahr\n");
    for(c=0; c<=HIGH; c+= STEP)
        printf("%3.0f %3.1f\n", c, cel2fahr(c));
    putchar('\n');
    return 0;
}

float fahr2cel(float fahr){
    // C = (5/9) * (F-32)
    return (5. / 9.) * (fahr - 32.);
}

float cel2fahr(float cel){
    // F = 9/5 * C + 32
    return (9. / 5.) * cel + 32.;
}
