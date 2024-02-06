// switch.cpp
#include<stdio.h>

int main() {
	// switch

	/*int num;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);


	switch (num) {
		case 1:
			printf("아메리카노 주문\n");
			break;
		case 2:
			printf("라떼 주문\n");
			break;
		case 3:
			printf("바닐라 주문\n");
			break;
		default:
			printf("해당 음료 없습니다.\n");
			break;
	}*/

	int month;
	printf("1월에서 12월 사이의 월을 입력하세요: ");
	scanf("%d", &month);


	switch (month) {
	case 1:
		printf("겨울 입니다.\n");
		break;
	case 2:
		printf("겨울 입니다.\n");
		break;
	case 3:
		printf("봄 입니다.\n");
		break;
	case 4:
		printf("봄 입니다.\n");
		break;
	case 5:
		printf("봄 입니다.\n");
		break;
	case 6:
		printf("여름 입니다.\n");
		break;
	case 7:
		printf("여름 입니다.\n");
		break;
	case 8:
		printf("여름 입니다.\n");
		break;
	case 9:
		printf("가을 입니다.\n");
		break;
	case 10:
		printf("가을 입니다.\n");
		break;
	case 11:
		printf("가을 입니다.\n");
		break;
	case 12:
		printf("겨울 입니다.\n");
		break;
	default:
		printf("해당 계절은 없습니다.\n");
		break;
	}
	

	return 0;
}