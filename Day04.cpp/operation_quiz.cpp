// operation_quiz
#include<stdio.h>

int main() {

	int num;
	printf("0���� 99999 ������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	getchar();
	int num10000 = num / 10000;
	int num1000 = (num % 10000) / 1000;
	int num100 = (num % 1000) / 100;
	int num10 = (num % 100) / 10;
	int num1 = num % 10;
	printf("�����: %d��%dõ%d��%d��%d\n", num10000, num1000, num100, num10, num1);

	int time;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &time);
	getchar();
	int min = time / 60;
	int sec = time % 60;
	printf("�����: %d�� %d��\n", min, sec);


	return 0;
}