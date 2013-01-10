/*
page: 41
exercise: 2-2
date: 2013-01-09 11:10:51
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>


// Main Entry Point
int main(){
    int i;
    int limit = 20;
    char c;
    char s[limit];
    /*
    for (i=0; i< limit-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    */
    for(i=0; i<limit-1; ++i){
        c = getchar();
        if (c == '\n') break;
        if (c == EOF) break;
        s[i] = c;
    }
    s[i] = '\0';
    printf("%s\n", s);
    return 0;
}
