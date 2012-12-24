/*		   		   
page: 31		   		   
exercise: ex1-18		   		   
date: 2012-12-18 10:17:38		   		   
author: Zhu Tao<zhutao.iscas@gmail.com>		   		   
*/		   		   
#include<stdio.h>		   		   
		   		   
#define MAX_LINE_LEN 1000		   		   
		   		   
void process(char to[], char from[], int);		   		   
		   		   
// Main Entry Point		   		   
int main(){		   		   
    int c;		   		   
    char chars[MAX_LINE_LEN];		   		   
    char processed[MAX_LINE_LEN];		   		   
    int i = 0;		   		   
    while((c=getchar()) != EOF){		   		   
        if (c == '\n') {		   		   
            chars[i++] = c;		   		   
            chars[i] = '\0';		   		   
            process(processed, chars, i);		   		   
            printf("%s", processed);		   		   
            i = 0;		   		   
        }		   		   
        else		   		   
            chars[i++] = c;		   		   
    }		   		   
    return 0;		   		   
}		   		   
		   		   
void process(char to[], char from[], int len){		   		   
    int i = 0;		   		   
    char c;		   		   
    int processed_len = len-2;		   		   
    if (len == 1) {		   		   
        to[i] = '\0';		   		   
        return;		   		   
    }		   		   
    // from[len] is the \n, skip it		   		   
    for(i=len-2; i>=0 ; i--) {		   		   
        if (from[i] == ' ' || from[i] == '\t')		   		   
            processed_len --;		   		   
        else		   		   
            break;		   		   
    }		   		   
    i = 0;		   		   
    printf("%d %d ", len, processed_len);
    while(i<=processed_len) {		   		   
        to[i] = from[i];		   		   
        i ++;		   		   
    }		   		   
    if (i == 0) {		   		   
        to[i] = '\0';		   		   
        return;		   		   
    }		   		   
    to[i] = '\n';		   		   
    to[i+1] = '\0';		   		   
}		   		   

