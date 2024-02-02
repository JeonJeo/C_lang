// review03.cpp
#include<stdio.h>

int main() {
	int year;
	printf("태어난 연도 입력: ");
	scanf("%d", &year);
	printf("당신의 나이는 %d이군요.\n", 2024 - year);

	double a, b, c;
	printf("세 개의 숫자 입력: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("세 개의 숫자의 평균은 %.2lf입니다.\n", (a + b + c) / 3);

	double cel;
	printf("섭씨 온도를 입력해주세요: ");
	scanf("%lf", &cel);
	printf("화씨 온도는 %.2lf입니다. \n", cel * 5.9 + 32);

	double m, kg;
	printf("키와 몸무게를 입력하세요: ");
	scanf("%lf %lf", &m, &kg);
	printf("BMI는 %lf 입니다.", kg / (m * m));

	return 0;
}
