/*
page: 58
exercise: 3-3
date: 2013-01-14 10:01:37
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

void expand(char s1[], char s2[]) {
    char c, d;
    int i, j;
    char low, high;
    i = 0;
    j = 0;
    while(c=s1[i]) {
        low = high = -1;
        if (c >= 'A' && c <= 'Z') {
            low = 'A';
            high = 'Z';
        }
        else if (c >= 'a' && c <= 'z') {
            low = 'a';
            high = 'z';
        }
        else if (c >= '0' && c <= '9') {
            low = '0';
            high = '9';
        }

        if (low != high) {
            if (s1[i+1] == '-') {
                if (s1[i+2] >= c && s1[i+2] <= high) {
                    // ready to expand
                    for(d=c; d<=s1[i+2]; d++, j++)   
                        s2[j] = d;
                    i += 3;
                }
                else {
                    s2[j++] = c;
                    s2[j] = s1[i+1];
                    i += 2;
                    j ++;
                }
            }
            else {
                s2[j] = c;
                i ++;
                j ++;
            }
        }
        else {
            s2[j] = c;
            i ++;
            j ++;
        }
    }
    s2[j] = '\0';
}

// Main Entry Point
int main(){
    char a[] = "a-zAzb-9A-Zjdsfwk-s0-9";
    char b[255];
    expand(a, b);
    printf("%s expands to %s\n", a, b);
    return 0;
}
