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

	// 1. 학생별로 국 영 수 점수를 나타내기
	for (int i = 0; i < 4; i++) {
		printf("%d번째 학생: ", i);
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				printf("국어 점수: %d ", score[i][j]);
			}
			if (j == 1) {
				printf("영어 점수: %d ", score[i][j]);
			}
			if (j == 2) {
				printf("수학 점수: %d ", score[i][j]);
				mathSum += score[i][j];
			}
		}
		printf("\n");
	}

	// 2. 수학 점수 평균 구하기
	printf("수학 평균: %d", mathSum / 4);



	return 0;
}