// review06.cpp
#include<stdio.h>

int main() {

	int cel;
	printf("���� �µ��� �Է��Ͻÿ�: ");
	scanf("%d", &cel);
	getchar();
	if (cel < 0) {
		printf("������ �߿�Ƿ� �ǳ�Ȱ���� �����մϴ�.\n");
	}
	else if (0 <= cel && cel <= 40) {
		printf("������ �����ϹǷ� �ǿ�Ȱ���� �����մϴ�.\n");
	}
	else {
		printf("������ ����Ƿ� �ǳ�Ȱ���� �����մϴ�.\n");
	}


	int num1, num2;
	printf("�� ���� ���� ������ �Է��Ͻÿ�: ");
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
	printf("�ټ� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	getchar();
	if (n1 > 0) total += n1;
	if (n2 > 0) total += n2;
	if (n3 > 0) total += n3;
	if (n4 > 0) total += n4;
	if (n5 > 0) total += n5;
	printf("����: %d", total);
	


	return 0;

}