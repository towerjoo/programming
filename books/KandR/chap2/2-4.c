/*
page: 46
exercise: 2-4
date: 2013-01-10 10:20:56
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

void squeeze(char *s1, char *s2) {
    char c, d;
    int i = 0;
    int j = 0;
    while(c=s2[i]){
        while(d=s1[j]){
            if (d == c) {
                while(s1[j]=s1[1+j++]);
                j = 0;
            }
            j ++;
        }
        i++;
        j = 0;
    }
}

// Main Entry Point
int main(){
    char s1[] = "hello world";
    char s2[] = "odoxw";
    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}
