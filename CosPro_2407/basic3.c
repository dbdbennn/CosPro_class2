#include <stdio.h>

/*
int isTimeofTwo(int n) {
	return (n % 2 == 0) ? 1 : 0;
}

int main() {
	if (isTimeofTwo(10) == 1) {
		printf("2�� ��� ");
	}
	else {
		printf("2�� ��� �ƴ�");
	}
}
*/
// �Լ��� �Ű����� ���� 
// 1. ���� ���� ���� -> ���� �����ϰ� ���� -> �Ű����� �Ϲ���

int Add(int x, int y) {
	return x + y;
}

int main() {
	int x = 5, y = 7, z;
	z = Add(x, y);
	printf("%d + %d = %d", x, y, z);

	return 0;
}