// review09.cpp
#include<stdio.h>

int main() {

	
	int score[4][3] = {
		{50, 80, 90},
		{60, 70, 70},
		{70, 70, 80},
		{90, 90, 100}
	};

	int mathSum = 0;

	// 1. �л����� �� �� �� ������ ��Ÿ����
	for (int i = 0; i < 4; i++) {
		printf("%d��° �л�: ", i);
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				printf("���� ����: %d ", score[i][j]);
			}
			if (j == 1) {
				printf("���� ����: %d ", score[i][j]);
			}
			if (j == 2) {
				printf("���� ����: %d ", score[i][j]);
				mathSum += score[i][j];
			}
		}
		printf("\n");
	}

	// 2. ���� ���� ��� ���ϱ�
	printf("���� ���: %d", mathSum / 4);



	return 0;
}