// if_else.cpp
#include<stdio.h>
int main() {

	/*int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num > 0) {
		printf("����Դϴ�.\n");
	}
	else if (num == 0) {
		printf("0�Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�\n");
	}*/

	/*int score;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &score);

	if (100 >= score && score >= 90) {
		printf("A�Դϴ�.\n");
	} 
	else if (90 >= score && score >= 80) {
		printf("B�Դϴ�.\n");
	}
	else if (80 >= score && score >= 70) {
		printf("C�Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�\n");
	}*/

	/*int kor, eng, math;
	printf("����, ����, ���� ������ ���ʴ�� �Է��ϼ���: ");
	scanf("%d %d %d", &kor, &eng, &math);
	getchar();
	int avg = (kor + eng + math) / 3;

	if (100 >= avg && avg >= 90) {
		printf("A�Դϴ�.\n");
	}
	else if (90 >= avg && avg >= 80) {
		printf("B�Դϴ�.\n");
	}
	else if (80 >= avg && avg >= 70) {
		printf("C�Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�\n");
	}*/

	// ��ø if��(nested if)
	/*int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	
	if (num > 0) {
		if (num == 10) {
			printf("10 �Դϴ�.\n");
		}
		else {
			printf("���� �����Դϴ�.\n");
		}
	}*/

	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num > 0) {
		if (num % 2 == 1) {
			printf("���� Ȧ���Դϴ�.\n");
		}
		else {
			printf("���� ¦���Դϴ�.\n");
		}
	}
	else if (num < 0) {
		if (num % 2 == -1) {
			printf("���� Ȧ���Դϴ�.\n");
		}
		else {
			printf("���� ¦���Դϴ�.\n");
		}
	}
	else {
		printf("0 �Դϴ�.\n");
	}

	return 0;
}