#include <stdio.h>

// ���ڿ� �� ���ڵ� �ٲٴ� �Լ� ��ĭ ä���
// ù ���ڿ� �ٸ� ���ڸ� ��� �����ִ� ������
// ��ȣȭ�ϴ� �Լ�

// ù ���ڿ� �ٸ� ���ڸ� ���� ������ �ٲ�

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1; src[i] != 0; ++i) {
		dest[i] = src[i] + dest[0]; // kokrkek �̷� ��
	}
	dest[i] = 0;
	return 0;
}
char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char) * (strlen(string) + 1));
	func_a(encoded, string);
	return encoded;
}

int main() {
	char string[] = "korean fighting";
	char* result = solution(string);
	printf("%s \n", result);
}