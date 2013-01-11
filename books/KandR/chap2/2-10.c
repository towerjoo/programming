/*
page: 49
exercise: 2-10
date: 2013-01-11 16:26:16
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

void lower(char *a) {
    int i = 0;
    while(a[i]){
        a[i] = (a[i] >= 'A' && a[i] <= 'Z') ? a[i] + 'a' - 'A' : a[i];
        i ++;
    }
}

// Main Entry Point
int main(){
    char a[] = "I love China, Do you love it?";
    lower(a);
    printf("%s\n", a);
    return 0;
}
