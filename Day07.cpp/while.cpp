// while.cpp
#include<stdio.h>

int main() {

	/// 정수 n을 입력받고, 1~n 까지의 합을 구하는 (while 1 이용!)
	//int n;
	//printf("정수를 입력하세요: ");
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

	// 1~n까지의 n의 약수들 출력하기
	// 16 -> 1 2 4 8 16
	/*int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	int start = 1;

	while (start < n) {
		if (n % start == 0) {
			printf("%d, ", start);
		}	
		start++;
	}
	printf("%d, ", start);*/

	// 여러 정수를 입력받고 0 누른 후 이전 정수의 합 출력
	int a = -1;
	int sum = 0;
	while (a != 0) {
		printf("정수를 입력하세요: ");
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);

	return 0;
}