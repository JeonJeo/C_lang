// pointer.cpp
#include<stdio.h>

int main() {
	// 2 + 3 = 5 [인간: 연산(뇌) + 기억(뇌)]
	// 2 + 3 = 5 [컴퓨터: 연산(cpu) + 기억(ram)]
	/*int a = 1;*/
	// printf("%d", &a);
	// &(주소 연산자): 변수의 주소값을 알려줌
	// *(포인터[간접 참조] 연산자): 주소값을 줘 봐, 거기에 담긴 값을 읽을게
	/*int* pa;
	pa = &a;
	printf("%d\n", *pa);
	*pa = 7;
	printf("%d\n", a);*/

	int m = 20;
	int* pm;
	pm = &m;
	

	printf("m의 값은 %d\n", m);
	printf("pm이 가리키는 주소값: %d\n", pm);
	printf("pm이 가리키는 포인터값: %d\n", *pm);











	return 0;

}