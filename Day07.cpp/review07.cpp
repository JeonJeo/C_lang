// review07.cpp
#include<stdio.h>

int main() {

	//구구단 1단~9단까지 모두 출력하는 프로그램
	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/

	/*int num;
	printf("배수 출력을 위한 정수 N을 입력하세요: ");
	scanf("%d", &num);

	for (int i = 1; i <= 100; i++) {
		if (i % num == 0) {
			printf("%d\n", i);
		}
	}*/
	//int n;
	//printf("2 이상의 정수를 입력하세요: ");
	//scanf("%d", &n);
	//
	//for (int i = 0; i < n; i++) {
	// for (int j = 0; j < n; j++) {
	// printf("*");
	// }
	// printf("\n");
	//}

	int N;
	printf("2 이상의 정수를 입력하세요: ");
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}