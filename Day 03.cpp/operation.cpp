// operation[������].cpp
// 
// ��ū[token]
// ��� ������: +, -, *, /, %
// ���� ������(=�� �־��شٴ� ��): =, +=, -=, *=, /= 
// �� ������: >, <, <=, >=, ==('����'��� ��), !=('�ٸ���'��� ��)
// 1('��'�̶�� ��), 0('����'�̶�� ��)
// ���� ������: &&('and'��� ��), ||('or'�̶�� ��), !('not'�̶�� ��)
// &&: ��� ���̿��߸� ����
// ||: �ϳ��� ���̸� ����

#include<stdio.h>

int main() {
	printf("%d", !(5 < 3 || 1 < 0 || 100 < 0));
	return 0;
}