// review07.cpp
#include<stdio.h>

int main() {

	//������ 1��~9�ܱ��� ��� ����ϴ� ���α׷�
	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/

	/*int num;
	printf("��� ����� ���� ���� N�� �Է��ϼ���: ");
	scanf("%d", &num);

	for (int i = 1; i <= 100; i++) {
		if (i % num == 0) {
			printf("%d\n", i);
		}
	}*/
	//int n;
	//printf("2 �̻��� ������ �Է��ϼ���: ");
	//scanf("%d", &n);
	//
	//for (int i = 0; i < n; i++) {
	// for (int j = 0; j < n; j++) {
	// printf("*");
	// }
	// printf("\n");
	//}

	int N;
	printf("2 �̻��� ������ �Է��ϼ���: ");
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}