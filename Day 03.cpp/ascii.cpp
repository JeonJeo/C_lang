// ascii.cpp
#include<stdio.h>

int main() {

	//char alpha;
	//printf("알파벳 소문자를 입력하세요: ");
	//scanf("%c", &alpha);
	//printf("%c의 순서는 %d입니다.\n", alpha, alpha - 97 );

	//int num;
	//printf("0에서 25 사이의 정수를 입력하세요: ");
	//scanf("%d", &num);
	//printf("%d번째 대문자는 %c입니다.", num, num + 65);

	char alpha;
	printf("알파벳 소문자를 입력하세요: ");
	scanf("%c", &alpha);
	getchar();
	printf("%c의 대문자는 %c입니다.\n", alpha ,alpha - 32);

	char ALPHA;
	printf("알파벳 대문자를 입력하세요: ");
	scanf("%c", &ALPHA);
	getchar();
	printf("%c의 소문자는 %c입니다.", ALPHA, ALPHA + 32);
	
	

	return 0;
}