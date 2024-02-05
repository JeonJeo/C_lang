// operation1.cpp
// 산술 연산자
// 대입 연산자
// 비교 연산자
// 논리 연산자
// -----------


#include<stdio.h>

int main() {
	// 증감 연산자
	// - ++, --
	//int a = 1;
	//a++;
	//a++;
	//printf("a: %d\n", a);
	//a--;
	//printf("a: %d\n", a);

	//int b = 0;
	//printf("b: %d\n", b++); // "후위 증감연산자"는 우선 순위가 맨 뒤여서, print가 먼저 실행된 뒤에 ++가 실행됨
	//printf("b: %d\n", ++b); // 반면에, "전위 증감연산자"는, ++가 먼저 실행된 뒤에 print가 실행됨
	//printf("b: %d\n", b);

	// 삼항 연산자
	/*char a;
	printf("알파벳을 입력하세요: ");
	scanf("%c", &a);
	getchar();
	int isCapital = 65 <=  a && a <= 90 ? 1 : 0;
	printf("결과: %d", isCapital);*/

	/*char a;
	printf("문자 하나를 입력하세요: ");
	scanf("%c", &a);
	getchar();

	int isCapital = (65 <= a && a <= 90);
	int isLower = (97 <= a && a <= 122);
	int isAlphabet = isCapital || isLower;
	int result = isAlphabet ? 1 : 0;
	printf("결과: %d", result);*/

	//콤마 연산자
	// int a, b; // ,

	//sizeof 연산자
	// int - 4byte, float - 4byte, double - 8byte, char - 1byte

	// 인간: 연산 + 기억 동시가능
	// 컴퓨터: 연산(cpu) | 기억(ram) 따로

	// 컴퓨터 RAM - 16GB

	// int 4byte = 32bit = 2 ^ 32(0~+-2^31)개 표현 가능
	// 1bit 로 표현할 수 있는 것 2개
	// 8bit = 1byte 2의 8승 = 256개
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb
	
	
	// type casting(형 변환)
	int n = 10;
	double k = (double)n;




	


	int m;
	printf("사이즈 m: %d\n", sizeof(m));


	 

	return 0;
}