/*
page: 71
exercise: 4-3
date: 2013-01-17 15:48:49
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>
#include<ctype.h>
#include<math.h>

#define MAXOP 100
#define MAXVAL 100
#define BUFSIZE 100
#define NUMBER '0'

char buffer[BUFSIZE];
int bufp = 0;

int getop(char []);
void push(double);
double pop();

double val[MAXVAL];
int sp = 0;

int getch(void);
void ungetch(int);
double atof(char []);

// Main Entry Point
int main(){
    int type;
    double op2;
    char s[MAXOP];
    while((type=getop(s)) != EOF) {
        switch(type){
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop()+pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '*':
            push(pop() * pop());
            break;
        case '/':
            op2 = pop();
            if (op2 == 0) 
                printf("0 can't be division\n");
            else
                push(pop() / op2);
            break;
        case '%' : 
            op2 = pop();
            if (op2 == 0) 
                printf("0 can't be modulo \n");
            else
                push((int)(pop()) % (int)op2);
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("Unknown command\n");
            break;
        }
    }
    return 0;
}

void push(double num) {
    if (sp < MAXOP)
        val[sp++] = num;    
    else
        printf("error: stack is full!\n");
}

double pop(){
    if (sp > 0) 
        return val[--sp];
    else
        printf("error: nothing in stack, you can't pop any more\n");
}
        
int getch(void) {
    return (bufp > 0) ? buffer[--bufp] : getchar();
}

void ungetch(int a) {
    if (bufp > BUFSIZE)
        printf("Buffer overflow\n");
    else
        buffer[bufp++] = a;
}

int getop(char s[]) {
    int i, c;
    while((s[0] = c = getch()) == ' ' || c == '\t') ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.') 
        return c;
    i = 0;
    
    if (isdigit(c))
        while (isdigit(s[++i]=c=getch()));
    if (c == '.')
        while (isdigit(s[++i]=c=getch()));
    s[i] = '\0';
    if (c == EOF) 
        ungetch(c);
    return NUMBER; 
}

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
