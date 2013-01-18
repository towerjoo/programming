/*
page: 67
exercise: 4-2
date: 2013-01-17 15:03:01
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>
#include<math.h>

double atof(char s[]) {
    int sign, esign;
    int i = 0;
    double val, power;
    power = 1.;
    for(i=0; isspace(s[i]); i++);
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+')
        i++;

    for(val=0.0; isdigit(s[i]); i++)
        val = val * 10. + (s[i] - '0');

    if (s[i] == '.') i++;

    for(; isdigit(s[i]); i++){
        val = val * 10. + (s[i] - '0');
        power *= 10.;
    }
    val = sign * val / power;
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
    }
    esign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+') {
        i++;
    }    
    for(; isdigit(s[i]); i++){
        val = val * pow(pow(10, esign), s[i]-'0');
    }
    return val;
}


// Main Entry Point
int main(){
    char a[] = "123.45E-06";
    printf("%s is %g\n", a, atof(a));
    return 0;
}
