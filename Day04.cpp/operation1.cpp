// operation1.cpp
// ��� ������
// ���� ������
// �� ������
// �� ������
// -----------


#include<stdio.h>

int main() {
	// ���� ������
	// - ++, --
	//int a = 1;
	//a++;
	//a++;
	//printf("a: %d\n", a);
	//a--;
	//printf("a: %d\n", a);

	//int b = 0;
	//printf("b: %d\n", b++); // "���� ����������"�� �켱 ������ �� �ڿ���, print�� ���� ����� �ڿ� ++�� �����
	//printf("b: %d\n", ++b); // �ݸ鿡, "���� ����������"��, ++�� ���� ����� �ڿ� print�� �����
	//printf("b: %d\n", b);

	// ���� ������
	/*char a;
	printf("���ĺ��� �Է��ϼ���: ");
	scanf("%c", &a);
	getchar();
	int isCapital = 65 <=  a && a <= 90 ? 1 : 0;
	printf("���: %d", isCapital);*/

	/*char a;
	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf("%c", &a);
	getchar();

	int isCapital = (65 <= a && a <= 90);
	int isLower = (97 <= a && a <= 122);
	int isAlphabet = isCapital || isLower;
	int result = isAlphabet ? 1 : 0;
	printf("���: %d", result);*/

	//�޸� ������
	// int a, b; // ,

	//sizeof ������
	// int - 4byte, float - 4byte, double - 8byte, char - 1byte

	// �ΰ�: ���� + ��� ���ð���
	// ��ǻ��: ����(cpu) | ���(ram) ����

	// ��ǻ�� RAM - 16GB

	// int 4byte = 32bit = 2 ^ 32(0~+-2^31)�� ǥ�� ����
	// 1bit �� ǥ���� �� �ִ� �� 2��
	// 8bit = 1byte 2�� 8�� = 256��
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb
	
	
	// type casting(�� ��ȯ)
	int n = 10;
	double k = (double)n;




	


	int m;
	printf("������ m: %d\n", sizeof(m));


	 

	return 0;
}