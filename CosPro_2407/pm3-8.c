#include <stdio.h>

// ���ڿ� ���� �����ϴ� ���ڵ��� �ִ��� Ȯ���ϴ� �Լ� �����ϱ�
// ���ڿ� pass �� ���� ���ڿ� key �� �Ű�����
// key�� ���ڰ� ���Ե� ��� 1, �׷��� ���� ��� 0�� return
// pass ���ڿ����� key ���ڰ� ���� �ּ� 1�� �̻� �־�� ��

int solution(char pass[], char key[]) {
	int answer = 0;
	int match_cnt = 0;
	for (int i = 0; key[i] != 0; ++i) {
		for (int k = 0; pass[k] != 0; ++k) {
			if (key[i] == pass[k]) {
				match_cnt++;
				break; // break -> i++, k=0���� �ݺ�

				// �ش��ϴ� key���� ���� ���� ã����
				// break�Ͽ� ���� key������ �Ѿ
				// ���� key�� �ش��ϴ� ���ڿ��� ������  
				// �ߺ��Ǿ� �������� ���� ������
			}
		}
	}

	if (match_cnt >= strlen(key)) answer = 1;
	// ��й�ȣ ���ڿ����� ������ ���ڰ� �ּ� 1�� �̻� �־�� ��
	return answer;
}

int main() {
	char pass[] = "z9xcGvadsf#qer";
	char key[] = "Ga#9";
	int result = solution(pass, key);
	printf("%d \n", result);
}