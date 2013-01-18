/*
page: 59
exercise: 3-4
date: 2013-01-14 10:21:10
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

/* itoa: convert n to characters in s */
void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0) /* record sign */
        n = -n;     // NOTE: if n is the INT_MIN, this line will overflow
    /* make n positive */
    i = 0;
    do {
        /* generate digits in reverse order */
        s[i++] = n % 10 + '0'; /* get next digit */
    } while ((n /= 10) > 0);
    /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void itoa2(int n, char s[])
{
    int i;
    int sign = n < 0 ? -1 : 1;
    i = 0;
    do {
        /* generate digits in reverse order */
        s[i++] = sign * (n % 10) + '0'; /* get next digit */
    } while ((n /= 10) != 0);
    /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void itoa3(int n, char s[])
{
    int i;
    int sign = n;
    i = 0;
    do {
        /* generate digits in reverse order */
        s[i++] = ((sign > 0) ? 1 : -1 ) * (n % 10) + '0'; /* get next digit */
    } while ((n /= 10));
    /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}


// Main Entry Point
int main(){
    int a = INT_MIN;    
    //int a = INT_MAX;    
    char s[255];
    itoa3(a, s);
    printf("%d is %s\n", a, s);
    return 0;
}
