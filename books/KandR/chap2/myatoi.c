#include<stdio.h>
#include<math.h>

#define ERROR -1

int atoi(char *astr) {
    int isvalid = 1;
    char c;
    int i = 0;
    int out = 0;
    int isminus = 0;
    c = astr[0];
    if (c == '-') {
        isminus = 1;
        i++;
    }
    while(c = astr[i++]){
        if ((c > '9') || (c < '0')) {
            isvalid = 0;
            break;
        }
    }
    i = (isvalid && isminus) ? 1 : 0;
    if (isvalid){
        while(c = astr[i++]){
            out = out * 10 + (c - '0');   
        }
        if (isminus)
            out = -out;
    }
    else
        out = ERROR;
    return out;
}

int main(){
    char a[] = "-1234";
    int out = atoi(a);
    printf("%d\n", out);
    return 0;
}
