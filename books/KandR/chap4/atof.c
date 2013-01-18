#include<stdio.h>
#include<ctype.h>

double atof(char s[]) {
    int sign;
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
    return sign * val / power;
}

int main() {
    char a[] = "1234.123";
    double aa = atof(a);
    printf("%s is %.10g\n", a, aa);
    return 0;
}
    
