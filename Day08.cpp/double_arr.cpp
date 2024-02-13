// double_arr.cpp
#include<stdio.h>

int main() {
	/*int a[2] = { 1,2 };
	int b[2][3] = { { 1,2,3 }, { 4,5,6 } };
	
	printf("%d ", b[0][0]);
	printf("%d ", b[0][1]);
	printf("%d ", b[0][2]);
	printf("%d ", b[1][0]);
	printf("%d ", b[1][1]);
	printf("%d \n", b[1][2]);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\n", b[i][j]);
		}
	}*/

	/*int eng_score[3] = { 50,60,80 };
	int math_score[3] = { 70,60,90 };
	int score[2][3] = { { 50,60,80 }, { 70,60,90 } };

	int engSum = 0;
	int mathSum = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				engSum += score[i][j];
			}
			else {
				mathSum += score[i][j];
			}
		}
	}

	printf("¿µ¾î ÃÑÇÕ: %d,  ¼öÇÐ ÃÑÇÕ: %d\n", engSum, mathSum);*/


	// ±¹ ¼ö ¿µ Å½
	int score[3][4] = {
		{70, 80, 80, 80},
		{60, 70, 50, 40},
		{70, 50, 80, 60}
	};
	
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		sum += score[i][3];
	}

	printf("Å½±¸ÀÇ Æò±ÕÀº %dÀÔ´Ï´Ù.\n", sum / 3);


	return 0;
}