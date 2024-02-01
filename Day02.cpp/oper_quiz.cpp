//oper_quiz.cpp
#include<stdio.h>

int main() {

	int n;
	printf("정사각형의 한 변의 길이 입력: ");
	scanf("%d", &n);

	printf("한 변의 길이는 %d이고, 정사각형의 넓이는 %d이고, 둘레는 %d이다.\n", n, n * n, n * 4);

	double m;
	printf("원의 반지름 길이 입력: ");
	scanf("%lf", &m);

	printf("반지름의 길이는 % .2lf이고, 원의 넓이는 % .2lf이고, 둘레는 % .2lf이다.\n", m, m*m*3.14, m*2*3.14);

	return 0;
}