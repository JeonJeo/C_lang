// while.cpp
#include<stdio.h>

int main() {

	/// ���� n�� �Է¹ް�, 1~n ������ ���� ���ϴ� (while 1 �̿�!)
	//int n;
	//printf("������ �Է��ϼ���: ");
	//scanf("%d", &n);

	//int start = 1;
	//int sum = 0;
	//while (1) {
	//	if (start == n) {
	//		sum += start;
	//		break;
	//	}
	//	sum += start;
	//start++;
	//}
	//printf("%d\n", sum);

	// 1~n������ n�� ����� ����ϱ�
	// 16 -> 1 2 4 8 16
	/*int n;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	int start = 1;

	while (start < n) {
		if (n % start == 0) {
			printf("%d, ", start);
		}	
		start++;
	}
	printf("%d, ", start);*/

	// ���� ������ �Է¹ް� 0 ���� �� ���� ������ �� ���
	int a = -1;
	int sum = 0;
	while (a != 0) {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);

	return 0;
}