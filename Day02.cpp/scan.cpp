//scan.cpp
#include<stdio.h>
//printf() - 출력
//scanf() - 입력
int main() {
	
	int a; // a가 무슨 숫자인지 모름
	printf("숫자 입력:");
	scanf("%d", &a); // a에 유저가 입력한 값 담기
	printf("a의 숫자는 %d입니다.", a);
	return 0;
}