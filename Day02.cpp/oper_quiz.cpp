//oper_quiz.cpp
#include<stdio.h>

int main() {

	int n;
	printf("���簢���� �� ���� ���� �Է�: ");
	scanf("%d", &n);

	printf("�� ���� ���̴� %d�̰�, ���簢���� ���̴� %d�̰�, �ѷ��� %d�̴�.\n", n, n * n, n * 4);

	double m;
	printf("���� ������ ���� �Է�: ");
	scanf("%lf", &m);

	printf("�������� ���̴� % .2lf�̰�, ���� ���̴� % .2lf�̰�, �ѷ��� % .2lf�̴�.\n", m, m*m*3.14, m*2*3.14);

	return 0;
}