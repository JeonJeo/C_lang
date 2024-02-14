// char_double_arr.cpp
#include<stdio.h>

int main() {

	// 커피 메뉴 3개 받고 모두 출력
	char menu[3][20];

	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴 입력: ", i+1);
		scanf("%s", &menu[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴는 %s\n", i+1, menu[i]);
	}

	
	



	return 0;
}