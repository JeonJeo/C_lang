//quiz_02.cpp
#include<stdio.h>

int main() {
	
	int age;
	printf("����� ���� �Է�: ");
	scanf("%d", &age);

	double height;
	printf("����� Ű �Է�: ");
	scanf("%lf", &height);

	int id;
	printf("����� �й� �Է�: ");
	scanf("%d", &id);

	printf("����� ���̴� %d�̰�, ����� Ű�� %.2lf�̰�, �й��� %d�̱���", age, height, id);


	return 0;
}