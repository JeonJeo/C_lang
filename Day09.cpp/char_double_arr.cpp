// char_double_arr.cpp
#include<stdio.h>

int main() {

	// Ŀ�� �޴� 3�� �ް� ��� ���
	char menu[3][20];

	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴� �Է�: ", i+1);
		scanf("%s", &menu[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴��� %s\n", i+1, menu[i]);
	}

	
	



	return 0;
}