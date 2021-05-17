#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main(void) {
	void swap(int* val1, int* val2);
	int val1, val2;

	printf("val1 입력: ");
	scanf("%d", &val1);
	getchar();

	printf("val2 입력: ");
	scanf("%d", &val2);

	swap(&val1, &val2);


	printf("\n\nval1: %d, val2: %d", val1, val2);

	return 0;
}

void swap(int* val1, int* val2) {
	int a = *val1;
	*val1 = *val2;
	*val2 = a;
}