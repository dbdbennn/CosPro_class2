#include <stdio.h>
#include <stdlib.h>

// ȭ�� �� �̵��� x�� y�� ���� ��ġ ���� ���ϴ� �Լ� �����ϱ�
// ���� 1024, ���� 768 ����

//��w' ȭ�� ���� �̵�, ��a' ȭ�� �������� �̵�, ��s' ȭ�� �Ʒ��� �̵�,
//��d' ȭ�� ���������� �̵�

// x, y �� ���� ������ �� �� �־������� return

int solution(char input[], int arr_len) {
	int answer = 0;
	int x, y;
	x = y = 0;
	for (int i = 0; input[i]; ++i) {
		if (input[i] == 'w') y++; // ��
		else if (input[i] == 's') y--; // �Ʒ�
		else if (input[i] == 'a') x--; // ��
		else if (input[i] == 'd') x++; // ��
		if (y == x) {
			printf("%d, %d\n", x, y);
			answer++;
		}
	}
	return answer;
}

int main() {
	char arr2[80] = "waawsddsassadw3wd";
	int result = solution(arr2, 80);
	printf("%d \n", result);
}