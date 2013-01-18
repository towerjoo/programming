/*
page: 56
exercise: 3-2
date: 2013-01-14 09:48:40
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

void escape(char s[], char t[]) {
    int i = 0;
    int j = 0;
    char c;
    while(c = s[i]) {
        switch(c) {
            case '\t':
                t[j++] = '\\';
                t[j] = 't';
                break;
            case '\n':
                t[j++] = '\\';
                t[j] = 'n';
                break;
            default:
                t[j] = s[i];
                break;
        }
        i ++;
        j ++;
    }
    t[j] = '\0';
}

// Main Entry Point
int main(){
    char s[] = "I love this great stuff.\n. How about you\tthen?\n";
    char t[255];
    printf("s:%s\n", s);
    escape(s, t);
    printf("t:%s\n", t);
    return 0;
}
