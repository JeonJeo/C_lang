// if.cpp
// 프로그램은 위에서 아래로 실행됨
// 제어문(control statement)
// 1. 조건문 [어떤 조건에 의해서 코드 실행]
// - if, switch
// 2. 반복문 [여러번 코드 실행]
// - for, while

#include<stdio.h>

int main() {

	// 조건문 - if문
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	// if (조건)
	/*if (num > 0) {
		printf("양수입니다.\n");
	}*/

	/*if (num % 2 == 1) {
		printf("홀수입니다.\n");
	}
	else {
		printf("짝수입니다.\n");
	}*/

	/*if (num > 0) {
		printf("양의 정수입니다.\n");
	}
	else {
		printf("0 또는 음의 정수입니다.\n");
	}*/

	if (num > 0 && num % 2 == 0) {
		printf("양의 짝수입니다.\n");
	}
	else {
		printf("정수입니다.\n");
	}

	printf("프로그램 끝");

	return 0;
}