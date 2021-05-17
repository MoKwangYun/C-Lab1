#include<stdio.h>

int main() {
	int arr[] = {10, 20, 30, 40 };
	int* parr = arr;
	printf("%u", parr[3]);
	printf("\n%u", *(parr + 3));
}