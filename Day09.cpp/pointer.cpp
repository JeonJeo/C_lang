// pointer.cpp
#include<stdio.h>

int main() {
	// 2 + 3 = 5 [�ΰ�: ����(��) + ���(��)]
	// 2 + 3 = 5 [��ǻ��: ����(cpu) + ���(ram)]
	/*int a = 1;*/
	// printf("%d", &a);
	// &(�ּ� ������): ������ �ּҰ��� �˷���
	// *(������[���� ����] ������): �ּҰ��� �� ��, �ű⿡ ��� ���� ������
	/*int* pa;
	pa = &a;
	printf("%d\n", *pa);
	*pa = 7;
	printf("%d\n", a);*/

	int m = 20;
	int* pm;
	pm = &m;
	

	printf("m�� ���� %d\n", m);
	printf("pm�� ����Ű�� �ּҰ�: %d\n", pm);
	printf("pm�� ����Ű�� �����Ͱ�: %d\n", *pm);











	return 0;

}