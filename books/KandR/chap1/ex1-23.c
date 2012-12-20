/*
page: 34
exercise: ex1-23
date: 2012-12-18 10:18:11
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define MAX_SIZE 1000
#define NA -1

// Main Entry Point
/*
page: 34
exercise: ex1-23
date: 2012-12-18 10:18:11
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
int main(){
    int i = 0;
    int j;
    int c;
    int lastc = NA;
    int start_pos = NA;;
    char chars[MAX_SIZE];
    int checkmore =  0;
    int singlelinemode = 0;
    while((c=getchar()) != EOF) {
        if (checkmore) {
            checkmore = 0;
            if (c != '*' && c != '/') {
                putchar(lastc);
            }
            if (c == '/')
                singlelinemode = 1;
        }
        if (singlelinemode) {   // for single line mode
            if (c == '\n'){
                putchar(c);
                singlelinemode = 0;
            }
        }
        else {  /* for multiple line mode */
            if (start_pos == NA && c == '*' && lastc == '/') {
                chars[i] = c; // / will be the 0 index char
                start_pos = 0;
                i ++;
            }
            else if (start_pos != NA && c == '/' && lastc == '*') {
                chars[i] = c;
                chars[i+1] = '\0';
                start_pos = NA;
            }
            else {
                if (start_pos == NA)    
                {
                    if (c == '/') {
                        chars[0] = c;
                        checkmore = 1;
                        i = 1;
                    }
                    else {
                        putchar(c);
                        i = 0;
                    }
                }
                else {          // means enter a comment
                    chars[i] = c;
                    i ++;
                }
                lastc = c;
            }
        }
    }
    if (!singlelinemode && start_pos != NA){
        chars[i] = '\0';
        printf("%s", chars);
    }
    return 0;
}
/*
page: 34
exercise: ex1-23
date: 2012-12-18 10:18:11
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
