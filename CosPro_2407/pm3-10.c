#include <stdio.h>

// ���ڿ����� ó���ϴ� �ð� ���ϴ� �Լ� �����ϱ�
// 1���� ��ǻ�Ͱ� ���� 4�� ���ڿ��� ó���ϴµ� 1���� �ɸ�

int solution(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]); // ���ڿ��� ���� ����
		result += (len / 4); // ���ڿ� ���̸� 4�� ����
		if (len % 4) // 4�� ������ �� �������� �ִٸ� 
					 // 1�� �߰�
					 // == 0 -> ����
			result++;
	}
	return result;
}

int main() {
	const char* strings[] = { "1234","123456","123456789" };
	int result = solution(strings, 3);
	printf("%d \n", result);
}