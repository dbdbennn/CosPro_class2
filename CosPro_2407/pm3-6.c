#include <stdio.h>
#include <stdlib.h>

// ���ڿ� �� �������� ���� ���ϴ� �Լ� ��ĭ ä���

int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; ++i) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = number * 10 + (string[i] - 48);
			// ó�� ���ڰ� ���� ���� 0*10 -> 0 + ó�� ���� ���� ��
			// ���ڰ� ���޾� ������, 
			// * 10 ������ ����
			// �ڸ����� �÷���
			// �׸��� ���� �ڸ��� �� (string[i] - 48) �� ����
		}
		else {
			answer += number;
			// ���ڰ� ������ ���� �� ����� ���Դٴ� ������,
			// answer�� ���� �ϳ��� �����ִ� ���� ��
			number = 0; // 0���� �ʱ�ȭ��.
		}
	}
	return answer;
}

int main() {
	char string[] = "korea 20/18. 10. 11. pm 1.";
	int result = solution(string);
	printf("%d \n", result);
}