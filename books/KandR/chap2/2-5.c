/*
page: 46
exercise: 2-5
date: 2013-01-10 10:32:15
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

int any(char *s1, char *s2) {
    char c, d;
    int i=0, j=0;
    int pos = -1;
    while(c=s1[i]) {
        while(d=s2[j]) {
            if (d == c) {
                pos = i;
                return pos;
            }
            j ++;
        }
        i ++;
        j = 0;
    }
    return pos;
}

// Main Entry Point
int main(){
    char s1[] = "IloveChina";
    char s2[] = "Whoiscooo?";
    printf("%d\n", any(s1, s2));
    return 0;
}
