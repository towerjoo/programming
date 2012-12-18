/*
page: 20
exercise: ex1-8
date: 2012-12-18 10:15:52
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>


// Main Entry Point
int main(){
    int nblanks=0, ntabs=0, nnewlines=0;
    int c;
    while((c=getchar()) != EOF){
        if (c == ' ') nblanks ++;
        else if (c == '\t') ntabs ++;
        else if (c == '\n') nnewlines ++;
    }
    printf("blanks: %d\ntabs:%d\nnew lines:%d\n", nblanks, ntabs, nnewlines);
    return 0;
}
