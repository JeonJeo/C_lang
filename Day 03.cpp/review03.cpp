// review03.cpp
#include<stdio.h>

int main() {
	int year;
	printf("�¾ ���� �Է�: ");
	scanf("%d", &year);
	printf("����� ���̴� %d�̱���.\n", 2024 - year);

	double a, b, c;
	printf("�� ���� ���� �Է�: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("�� ���� ������ ����� %.2lf�Դϴ�.\n", (a + b + c) / 3);

	double cel;
	printf("���� �µ��� �Է����ּ���: ");
	scanf("%lf", &cel);
	printf("ȭ�� �µ��� %.2lf�Դϴ�. \n", cel * 5.9 + 32);

	double m, kg;
	printf("Ű�� �����Ը� �Է��ϼ���: ");
	scanf("%lf %lf", &m, &kg);
	printf("BMI�� %lf �Դϴ�.", kg / (m * m));

	return 0;
}