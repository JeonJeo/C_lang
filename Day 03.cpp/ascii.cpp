// ascii.cpp
#include<stdio.h>

int main() {

	//char alpha;
	//printf("���ĺ� �ҹ��ڸ� �Է��ϼ���: ");
	//scanf("%c", &alpha);
	//printf("%c�� ������ %d�Դϴ�.\n", alpha, alpha - 97 );

	//int num;
	//printf("0���� 25 ������ ������ �Է��ϼ���: ");
	//scanf("%d", &num);
	//printf("%d��° �빮�ڴ� %c�Դϴ�.", num, num + 65);

	char alpha;
	printf("���ĺ� �ҹ��ڸ� �Է��ϼ���: ");
	scanf("%c", &alpha);
	getchar();
	printf("%c�� �빮�ڴ� %c�Դϴ�.\n", alpha ,alpha - 32);

	char ALPHA;
	printf("���ĺ� �빮�ڸ� �Է��ϼ���: ");
	scanf("%c", &ALPHA);
	getchar();
	printf("%c�� �ҹ��ڴ� %c�Դϴ�.", ALPHA, ALPHA + 32);
	
	

	return 0;
}