// arr_string.cpp
#include<stdio.h>

int main() {
	// 배열 -> 정수형 배열, 문자형 배열[특이함]
	//char greeting[] = "hello world!";
	//printf("%s\n", greeting);
	//printf("%c\n", greeting[4]); // o가 나옴
	//greeting[1] = 'E';			 // e를 E로 바꿔주기
	//printf("%s\n", greeting);

	char coffee[20];
	printf("커피 메뉴 입력: ");
	scanf("%s", &coffee);
	printf("입력하신 커피 메뉴 %s 입니다.", coffee);




	return 0;
}