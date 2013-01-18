/*
page: 65
exercise: 4-1
date: 2013-01-17 10:21:04
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>
#include<string.h>

// match rightmost
int strindex(char s[], char t[]){
    int s_len = strlen(s); 
    int t_len = strlen(t); 
    int i, j, k;

    if (t_len > s_len) 
            return -1;

    for(i=s_len-1; i != 0; i--) {
        for(j=i, k=t_len-1; k > 0 && s[j] == t[k]; j--, k--);
        if (k == 0) 
            return i - t_len;
    }
    return -1;
}

// match leftmost
int strindex2(char s[], char t[]){
    int i, j, k;

    for(i=0; s[i] != '\0'; i++){
        for(j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

// Main Entry Point
int main(){
    char a[] = "I love you China, really love you.";
    //char b[] = "";
    char b[] = "love";
    printf("\"%s\" in \"%s\"'s rightmost match is %d\n", b, a, strindex(a, b));
    printf("\"%s\" in \"%s\"'s leftmost match is %d\n", b, a, strindex2(a, b));
    return 0;
}
