// switch.cpp
#include<stdio.h>

int main() {
	// switch

	/*int num;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);


	switch (num) {
		case 1:
			printf("�Ƹ޸�ī�� �ֹ�\n");
			break;
		case 2:
			printf("�� �ֹ�\n");
			break;
		case 3:
			printf("�ٴҶ� �ֹ�\n");
			break;
		default:
			printf("�ش� ���� �����ϴ�.\n");
			break;
	}*/

	int month;
	printf("1������ 12�� ������ ���� �Է��ϼ���: ");
	scanf("%d", &month);


	switch (month) {
	case 1:
		printf("�ܿ� �Դϴ�.\n");
		break;
	case 2:
		printf("�ܿ� �Դϴ�.\n");
		break;
	case 3:
		printf("�� �Դϴ�.\n");
		break;
	case 4:
		printf("�� �Դϴ�.\n");
		break;
	case 5:
		printf("�� �Դϴ�.\n");
		break;
	case 6:
		printf("���� �Դϴ�.\n");
		break;
	case 7:
		printf("���� �Դϴ�.\n");
		break;
	case 8:
		printf("���� �Դϴ�.\n");
		break;
	case 9:
		printf("���� �Դϴ�.\n");
		break;
	case 10:
		printf("���� �Դϴ�.\n");
		break;
	case 11:
		printf("���� �Դϴ�.\n");
		break;
	case 12:
		printf("�ܿ� �Դϴ�.\n");
		break;
	default:
		printf("�ش� ������ �����ϴ�.\n");
		break;
	}
	

	return 0;
}