#include<stdio.h>

void lower(char *astr) {
    int i = 0;
    char c;
    while(c=astr[i]){
        if (c >= 'A' && c <= 'Z'){
            astr[i] = c - 'A' + 'a';
        }
        i++;
    }
}

int main(){
    char a[] = "I LOVE China";
    lower(a);
    printf("%s\n", a);
    return 0;
}
