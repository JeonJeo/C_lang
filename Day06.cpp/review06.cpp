// review06.cpp
#include<stdio.h>

int main() {

	int cel;
	printf("현재 온도를 입력하시오: ");
	scanf("%d", &cel);
	getchar();
	if (cel < 0) {
		printf("날씨가 추우므로 실내활동을 권장합니다.\n");
	}
	else if (0 <= cel && cel <= 40) {
		printf("날씨가 쾌적하므로 실외활동을 권장합니다.\n");
	}
	else {
		printf("날씨가 더우므로 실내활동을 권장합니다.\n");
	}


	int num1, num2;
	printf("두 개의 양의 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);
	getchar();
	if (num1 == num2) {
		printf("%d\n", num1 * num2);
	}
	else {
		printf("none.\n");
	}
	

	int n1, n2, n3, n4, n5;
	int total = 0;
	printf("다섯 개의 정수를 입력하시오 : ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	getchar();
	if (n1 > 0) total += n1;
	if (n2 > 0) total += n2;
	if (n3 > 0) total += n3;
	if (n4 > 0) total += n4;
	if (n5 > 0) total += n5;
	printf("총합: %d", total);
	


	return 0;

}