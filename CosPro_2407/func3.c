#include <stdio.h>

int func_a(char(*p)[20], int n) { 
	// p : �迭�� ��ġ�� ����ų ������ ����, n: �迭�� ����
	// n�� ���� ũ��
	// char p[][20]
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]); // ���� �迭 �Ѳ����� ���
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 20; k++) {
			printf("%c", p[i][k]);
		}
		printf("\n");
	}

	return 0;
}

int main() {
	char titles[5][20] = { "first", "seconds", "thirds", "fourth", "fifth" };
	func_a(titles, 5); // 2���� �迭 ����
}