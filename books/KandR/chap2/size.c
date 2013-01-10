#include<stdio.h>

int main(){
    int a = 3;
    short b = 3;
    long c = 3;
    float d = 3.;
    double e = 3.;
    long double f = 3.;
    int *g = &a;
    char h = '3';
    printf("size of int is:%d\n", sizeof(a));
    printf("size of short is:%d\n", sizeof(b));
    printf("size of long is:%d\n", sizeof(c));
    printf("size of float is:%d\n", sizeof(d));
    printf("size of double is:%d\n", sizeof(e));
    printf("size of long double is:%d\n", sizeof(f));
    printf("size of pointer is:%d\n", sizeof(g));
    printf("size of char is:%d\n", sizeof(h));
    return 0;
}
