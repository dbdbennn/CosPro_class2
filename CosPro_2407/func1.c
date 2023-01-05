#include <stdio.h>
/*
void swap(int a, int b) {
	int temp = a;

	a = b;
	b = temp;

	printf("�Լ� �ȿ����� ó�� : %d, %d\n", a, b);
}

int main() {
	int a = 5, b = 8;
	printf("�Լ� ȣ�� �� %d, %d\n", a, b);

	swap(a, b);
	printf("�Լ� ȣ�� �� %d, %d\n", a, b);
}
*/

void swap(int* pa, int* pb) {
	int a = *pa; // 5
	int b = *pb; // 8

	*pa = b; // a �ּҿ� 8����
	*pb = a; // b �ּҿ� 5����
}

int main() {
	int a = 5, b = 8;
	printf("�Լ� ȣ�� �� %d, %d\n", a, b);

	// �ּ� ���� ������
	swap(&a, &b);
	printf("�Լ� ȣ�� �� %d, %d\n", a, b);
}