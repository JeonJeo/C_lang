// review05.cpp
#include<stdio.h>

int main() {

	int num;
	printf("10,000���� 99,999������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	getchar();
	printf("�����: %d\n", (num / 100) % 10);

	int num1;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num1);
	getchar();
	int num20_30 = 20 <= num1 && num1 <= 30 ? 1 : 0;
	printf("�����: %d\n", num20_30);

	int num2;
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &num2);
	getchar();
	printf("�����: %d\n", num2 % 2 == 1 ? 1 : 0);

	int num3, num4;
	printf("���� �ٸ� �� ������ �Է��ϼ���: ");
	scanf("%d %d", &num3, &num4);
	getchar();
	int num3_4 = num3 > num4 ? num3 : num4;
	printf("�����: %d\n", num3_4);



	return 0;
}