// for.cpp
// ���(control_statement)[�ڵ带 ��Ʈ����]
// 1. ���ǹ�(if, switch)[���ǿ� ���� �ڵ� ����]
// 2. �ݺ���(for, while)[�ڵ带 n�� ����]
#include<stdio.h>

int main() {

	/// n������ �� ����
	/*int n;
	int total = 0;
	printf("���� �Է�: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		total += i;
	}
	printf("total: %d\n", total);*/

	/// ������ ����
	/*int n;
	printf("�� �Է�: ");
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n*i);
	}

	/// A~Z ���ĺ� ����
	for (int i = 65; i <= 90; i++) {
		printf("%c %c\n", i, i + 32);
	}*/
	
	//for (int i = 0; i < 10; i++) {
	//	if (i == 7) {
	//		// break;		->for�� Ż��
	//		// continue;	->for�� ����
	//	}
	//	printf("%d", i);
	//}

	// ���ĺ� A~K, O~Z���� ���
	/*for (int i = 65; i <= 90; i++) {
		if (76 <= i && i <= 78) {
			continue;
		}
		printf("%c\n", i);
	}*/

	// ��ø for��
	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("i: %d, j: %d\n", i, j);
		}
	}*/

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			printf("%d*%d = %d\n", i, j, i*j);
	}
	
	

	return 0;
}