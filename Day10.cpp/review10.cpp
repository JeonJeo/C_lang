// review10.cpp
#include<stdio.h>
int main() {

	// 1. ������ ���� a�� �����ؼ�, �����͸� ����ؼ� ���� 100���� �ٲٱ�
	int a;
	int* pa;
	pa = &a;
	*pa = 100;
	printf("%d\n", a);

	// 2. ������ ���� b, c�� ���� 3, 5�� �ʱ�ȭ�ϰ�, �����͸� ����ؼ� ���� �ٲٱ�
	int b = 3, c = 5, temp;
	int* p;
	p = &b; // �ּҰ� b
	temp = *p; // temp == 3
	p = &c; // �ּҰ� c
	b = *p; // b == 5
	p = &temp;
	c = *p; // c == 3
	printf("%d %d\n", b, c);

	// 3. ������ �迭 ���� arr[5]�� �����ؼ� �����͸� ����ؼ� 3�� ����� ä���
	int arr[5] = { 3, 6, 9, 12, 15 };
	int* pArr;

	for (int i = 0; i < 5; i++) {
		pArr = &arr[i];
		*pArr = i * 3 + 3;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}