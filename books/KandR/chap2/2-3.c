/*
page: 44
exercise: 2-3
date: 2013-01-10 09:52:28
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>

#define ERROR -1

int htoi(char *astr) {
    char c;
    int isvalid = 1;
    int i = 0;
    int hasprefix = 0;
    int out = 0;
    int added = 0;
    c = astr[i];
    if (c == '0') {
        i ++;
        c = astr[i]; 
        if (c != 'x' && c != 'X') {
            isvalid = 0;
        }
        hasprefix = 1;
    }
    else {
        while(c=astr[i++]) {
            if ((c >= '0' && c <= '9') || (c >= 'a' || c <= 'f') || (c >= 'A' || c <= 'F')) 
                continue;
            else {
                isvalid = 0;
                break;
            }
        }
    }
    i = (isvalid && hasprefix) ? 2 : 0;    
    if (isvalid) {
        while(c=astr[i]){
            added = (c >= '0' && c <= '9') ? c-'0': ((c >= 'a' && c <= 'f') ? c-'a'+10 : c-'A'+10);            
            out = out * 16 + added;
            i ++;
        }
    }
    else {
        out = -1;
    }
    return out;
}

// Main Entry Point
int main(){
    char a[] = "FF";
    printf("%d\n", htoi(a));
    return 0;
}
