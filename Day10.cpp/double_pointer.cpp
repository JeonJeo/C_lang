// double_pointer.cpp
#include<stdio.h>
int main() {
	//int a = 10;
	//int* pa;
	//int** ppa;
	//pa = &a;
	//ppa = &pa;

	//printf("a의 값: %d\n", a);
	//printf("a의 주소값: %d\n", &a);

	//printf("pa의 값[a의 주소값]: %d\n", pa);
	//printf("pa의 주소값: %d\n", &pa);

	//printf("ppa의 값[pa의 주소값]: %d\n", ppa);
	//printf("ppa가 가리키는 값[a의 주소값]: %d\n", *ppa);
	//printf("ppa의 더블 포인터값: %d\n", **ppa);

	int a = 1, b = 2, c = 3;
	int* parr[3] = { &a, &b, &c };

	printf("%d %d %d", *parr[0], *parr[1], *parr[2]);
	


	return 0;
}