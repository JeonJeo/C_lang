// review04.cpp
#include<stdio.h>

int main() {

	char ALPHA;
	printf("�빮�ڸ� �Է��ϼ���: ");
	scanf("%c", &ALPHA);
	getchar();
	printf("�빮�� %c�� �ҹ��ڴ� %c�Դϴ�.\n", ALPHA, ALPHA + 32);

	char alpha;
	printf("�ҹ��ڸ� �Է��ϼ���: ");
	scanf("%c", &alpha);
	getchar();
	printf("�ҹ��� %c�� �빮�ڴ� %c�Դϴ�.\n", alpha, alpha - 32);



	return 0;
}