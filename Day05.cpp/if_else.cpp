// if_else.cpp
#include<stdio.h>
int main() {

	/*int num;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if (num > 0) {
		printf("양수입니다.\n");
	}
	else if (num == 0) {
		printf("0입니다.\n");
	}
	else {
		printf("음수입니다\n");
	}*/

	/*int score;
	printf("점수를 입력하세요: ");
	scanf("%d", &score);

	if (100 >= score && score >= 90) {
		printf("A입니다.\n");
	} 
	else if (90 >= score && score >= 80) {
		printf("B입니다.\n");
	}
	else if (80 >= score && score >= 70) {
		printf("C입니다.\n");
	}
	else {
		printf("낙제입니다\n");
	}*/

	/*int kor, eng, math;
	printf("국어, 영어, 수학 점수를 차례대로 입력하세요: ");
	scanf("%d %d %d", &kor, &eng, &math);
	getchar();
	int avg = (kor + eng + math) / 3;

	if (100 >= avg && avg >= 90) {
		printf("A입니다.\n");
	}
	else if (90 >= avg && avg >= 80) {
		printf("B입니다.\n");
	}
	else if (80 >= avg && avg >= 70) {
		printf("C입니다.\n");
	}
	else {
		printf("군대입니다\n");
	}*/

	// 중첩 if문(nested if)
	/*int num;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	
	if (num > 0) {
		if (num == 10) {
			printf("10 입니다.\n");
		}
		else {
			printf("양의 정수입니다.\n");
		}
	}*/

	int num;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if (num > 0) {
		if (num % 2 == 1) {
			printf("양의 홀수입니다.\n");
		}
		else {
			printf("양의 짝수입니다.\n");
		}
	}
	else if (num < 0) {
		if (num % 2 == -1) {
			printf("음의 홀수입니다.\n");
		}
		else {
			printf("음의 짝수입니다.\n");
		}
	}
	else {
		printf("0 입니다.\n");
	}

	return 0;
}