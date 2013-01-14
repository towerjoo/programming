/*
page: 54
exercise: 3-1
date: 2013-01-14 09:16:17
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>
#include<limits.h>

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid-1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}


int binsearch2(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while(low <= high && x != v[mid]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid]) return mid;
    return -1;
}
// Main Entry Point
int main(){
    int a[SHRT_MAX / 2];
    int x = 0;
    int i;
    for(i=0; i< SHRT_MAX / 2; i++) a[i] = i;
    printf("pos of %d in a is :%d\n", x, binsearch2(x, a, sizeof(a)/sizeof(int)));
    return 0;
}
