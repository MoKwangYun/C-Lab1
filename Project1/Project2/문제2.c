#include<stdio.h>

int main() {
	char* ch = "Hello";
	char** pp = &ch;
	printf("%c", *(*pp+2));
}