#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	void sumcolrow(int x[][5], int row, int col);
	void print(int x[][5], int row, int col);

	int x[5][5];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &x[i][j]);
			getchar();
		}
	}

	printf("���� ǥ�� ���ο� ������, �׸��� ��� ���� ���մϴ�.\n");
	printf("\n-----------------------------------------------------");


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j == 0)
				printf("\n");

			printf("| %5d ", x[i][j]);

			if (j == 3)
				printf("|");
		}
	}

	printf("\n\n�� ǥ�� ���ο� ������, �׸��� ��� ����\n���� ��� ���� �������� ���մϴ�.");
	sumcolrow(x, 4, 4);
	printf("\n-----------------------------------------------------");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 0)
				printf("\n");

			if ((i == 4) || (j == 4))
				print(x, i, j);
			else
				printf("| %5d ", x[i][j]);

			if (j == 4)
				printf("|");
		}
	}
	printf("\n-----------------------------------------------------\n");


	return 0;
}

void print(int x[][5], int row, int col) {
	printf("| %5d ", x[row][col]);
}

void sumcolrow(int x[][5], int row, int col) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			sum += x[i][j];
			if (j == 3) {
				x[i][col] = sum;
				sum = 0;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			sum += x[j][i];
			if (j == 3) {
				x[row][i] = sum;


				sum = 0;
			}
		}
	}
	sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += (x[i][col]);




	}
	x[row][col] = sum;

}
