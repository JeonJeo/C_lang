//quiz_03.cpp
#include<stdio.h>

int main() {
	
	int month;
	printf("당신의 생일 월 입력: ");
	scanf("%d", &month);
	getchar();
	int date;
	printf("당신의 생일 일 입력: ");
	scanf("%d", &date);
	getchar();
	printf("당신의 생일은 %d월 %d일 이군요 !\n", month, date);


	char alpha;
	printf("알파벳 하나 입력: ");
	scanf("%c", &alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);
	printf("%c %c\n", alpha, alpha, alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);


	return 0;
}