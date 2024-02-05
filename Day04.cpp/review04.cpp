// review04.cpp
#include<stdio.h>

int main() {

	char ALPHA;
	printf("대문자를 입력하세요: ");
	scanf("%c", &ALPHA);
	getchar();
	printf("대문자 %c의 소문자는 %c입니다.\n", ALPHA, ALPHA + 32);

	char alpha;
	printf("소문자를 입력하세요: ");
	scanf("%c", &alpha);
	getchar();
	printf("소문자 %c의 대문자는 %c입니다.\n", alpha, alpha - 32);



	return 0;
}