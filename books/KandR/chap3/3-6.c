/*
page: 59
exercise: 3-6
date: 2013-01-14 11:25:41
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>
#include<string.h>
#include<limits.h>

void reverse(char s[]){
    int left, right;
    char c;
    left = 0;
    right = strlen(s) -1;
    for(; left <= right; left++, right--){
        c = s[left];
        s[left] = s[right];
        s[right] = c;
    }
}

void itoa(int n, char s[], int minwidth) {
    int sign;
    int padding = 0;
    int i = 0;
    int j;
    sign = n;
    do {
        s[i++] = (sign > 0 ? 1 : -1) * (n % 10) + '0';
    }while(n /= 10);
    if (sign < 0)
        s[i++] = '-';
    padding = minwidth - i;
    for(j=i; j < i+padding; j++){
        s[j] = 'B';
    }
    s[j] = '\0';
    reverse(s);
}

// Main Entry Point
int main(){
    int a = 12334;
    char s[255];
    int padding = 23;
    itoa(a, s, padding);
    printf("%d after %d padding is %s\n", a, padding, s);
    return 0;
}
