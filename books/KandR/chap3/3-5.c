/*
page: 59
exercise: 3-5
date: 2013-01-14 10:21:15
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

void itob(int n, char *s, int base) {
    int sign;
    int i = 0; 
    int temp;
    sign = n;
    do {
        temp = ((sign > 0) ? 1 : -1) * (n % base);
        if (temp > 10) {
            s[i++] = temp - 10 + 'A';
        }
        else {
            s[i++] = temp + '0';
        }
    } while(n /= base);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0'; 
    reverse(s);
}

// Main Entry Point
int main(){
    int a = INT_MIN;
    char s[255];
    int base = 10;
    itob(a, s, base);
    printf("%d to char based on %d is %s\n", a, base, s);
    return 0;
}
