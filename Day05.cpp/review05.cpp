// review05.cpp
#include<stdio.h>

int main() {

	int num;
	printf("10,000에서 99,999사이의 정수를 입력하시오: ");
	scanf("%d", &num);
	getchar();
	printf("결과값: %d\n", (num / 100) % 10);

	int num1;
	printf("정수를 입력하세요: ");
	scanf("%d", &num1);
	getchar();
	int num20_30 = 20 <= num1 && num1 <= 30 ? 1 : 0;
	printf("결과값: %d\n", num20_30);

	int num2;
	printf("양의 정수를 입력하세요: ");
	scanf("%d", &num2);
	getchar();
	printf("결과값: %d\n", num2 % 2 == 1 ? 1 : 0);

	int num3, num4;
	printf("서로 다른 두 정수를 입력하세요: ");
	scanf("%d %d", &num3, &num4);
	getchar();
	int num3_4 = num3 > num4 ? num3 : num4;
	printf("결과값: %d\n", num3_4);



	return 0;
}