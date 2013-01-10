/*
page: 36
exercise: 2-1
date: 2013-01-09 09:47:30
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

void get_range_for_char(){
    char min = - pow(2, sizeof(char) * 8 - 1);
    char max  = pow(2, sizeof(char) * 8 - 1) - 1;
    printf("range for char is [%d, %d]\n", min, max);
}

void get_range_for_char2() {
    printf("range for char is [%d, %d]\n", CHAR_MIN, CHAR_MAX);
}

void get_range_for_unsigned_char() {
    unsigned char min = 0;
    unsigned char max = pow(2, sizeof(unsigned char) * 8) - 1;
    printf("range for unsigned char is [%d, %d]\n", min, max);
}

void get_range_for_unsigned_char2() {
    printf("range for unsigned char is [%d, %d]\n", 0, UCHAR_MAX);
}

void get_range_for_int() {
    int min = - pow(2, sizeof(int) * 8-1);
    int max = pow(2, sizeof(int) * 8-1) - 1;
    printf("range for int is [%d, %d]\n", min, max);
}

    
void get_range_for_int2() {
    printf("range for int is [%d, %d]\n", INT_MIN, INT_MAX);
}

void get_range_for_unsigned_int() {
    unsigned int min = 0;
    unsigned int max = pow(2, sizeof(int) * 8) - 1;
    printf("range for unsigned int is [%d, %d]\n", min, max);
}
void get_range_for_unsigned_int2() {
    printf("range for unsigned int is [%d, %d]\n", 0, UINT_MAX);
}

void get_range_for_short() {
    short min = - pow(2, sizeof(short) * 8 -1);
    short max = pow(2, sizeof(short) * 8 - 1) - 1;
    printf("range for short int is [%d, %d]\n", min, max);
}

void get_range_for_short2() {
    printf("range for short int is [%d, %d]\n", SHRT_MIN, SHRT_MAX);
}
void get_range_for_long() {
    long min = - pow(2, sizeof(long) * 8 -1);
    long max = pow(2, sizeof(long) * 8 - 1) - 1;
    printf("range for long int is [%ld, %ld]\n", min, max);
}
    

void get_range_for_long2() {
    printf("range for long int is [%ld, %ld]\n", LONG_MIN, LONG_MAX);
}
    

// Main Entry Point
int main(){
    unsigned char a;
    a =  ~0;
    a >>= 1;
    printf("range for signed char is [%d, %d]\n", -a - 1, a);
    printf("range for unsigned char is [%d, %d]\n", 0, 2*a+1);
    get_range_for_char();
    get_range_for_char2();
    get_range_for_unsigned_char();
    get_range_for_unsigned_char2();
    get_range_for_int();
    get_range_for_int2();
    get_range_for_short();
    get_range_for_short2();
    get_range_for_long();
    get_range_for_long2();
    return 0;
}
