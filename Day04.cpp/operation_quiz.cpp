// operation_quiz
#include<stdio.h>

int main() {

	int num;
	printf("0부터 99999 사이의 정수를 입력하시오: ");
	scanf("%d", &num);
	getchar();
	int num10000 = num / 10000;
	int num1000 = (num % 10000) / 1000;
	int num100 = (num % 1000) / 100;
	int num10 = (num % 100) / 10;
	int num1 = num % 10;
	printf("결과값: %d만%d천%d백%d십%d\n", num10000, num1000, num100, num10, num1);

	int time;
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &time);
	getchar();
	int min = time / 60;
	int sec = time % 60;
	printf("결과값: %d분 %d초\n", min, sec);


	return 0;
}