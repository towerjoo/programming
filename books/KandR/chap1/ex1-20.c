/*
page: 34
exercise: ex1-20
date: 2012-12-18 10:17:57
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>


// Main Entry Point
int main(){
	int n = 8;
	int c;
	int i;
	while((c=getchar()) != EOF) {
		if (c == '\t') {
			for(i=0; i<n; i++) 
				putchar(' ');
		}
		else
			putchar(c);
	}
	return 0;
}
