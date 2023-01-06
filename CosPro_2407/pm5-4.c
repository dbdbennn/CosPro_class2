// ��ȭ��ȣ ���� ���߾� �����ϴ� �Լ� �����ϱ�

// 1) ������ �ִ� ������ �޴���ȭ��ȣ�� ����, ������ �ǹ��ϴ� ��ȣ�� ���ڴ� ����.
// 2) ��� �޴���ȭ�� ��0������ ���۵Ǿ�� �Ѵ�.
// 3) A - B - C�� �������� A�� 3�ڸ�, B�� C�� 4�ڸ��̴�.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(char dest[], char src[]) {
	int k = 0;
	for (int i = 0; src[i] != 0; i++) {
		if ('0' <= src[i] && src[i] <= '9') dest[k++] = src[i];
	}
	dest[k] = 0;
	return k;
}
char* solution(char number[]) {
	char* copy = (char*)malloc(sizeof(char) * (strlen(number) + 1));
	char* answer = (char*)malloc(sizeof(char) * 14);
	int k = 0;
	if (number[0] != '0') copy[k++] = '0';
	func_a(copy + k, number); // �� ���ǿ� ���� ������ ��ġ�� �ٲ��.
	if (strlen(copy + 3) < 8) answer[4] = '0';
	k = 0;
	for (int i = 0; copy[i] != 0; i++) {
		answer[k++] = copy[i];
		if (k == 3 || k == 8) {
			answer[k++] = '-';
		}
		if (k == 4 && answer[k] == '0')k++;
	}
	answer[k] = 0;
	free(copy);
	return answer;
}

int main() {
	char number[] = "010-111-2222";
	char* ret = solution(number);
	printf("%s \n", ret);
}