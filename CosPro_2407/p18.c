#include <stdio.h>

// �̸��� Ư�� ���ڰ� ���Ե� ����� ���� ���ϴ� �Լ� �����ϱ�
// �̸��� j�� k �ִ� ��� �� ����

int solution(char* name_list[], int name_list_len) {
	int answer = 0;

	for (int i = 0; i < name_list_len; ++i) {
		for (int j = 0; name_list[i][j] != 0; ++j) {
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break; // continue -> break
				// continue�� �ϸ� �̸��� ������ Ž���ϰ� ��
				// �׷��� j�� k�� ������ �� ��� 
				// �� ��ŭ answer++; �ϰ� ��

				// break�ϸ� ���� ���ڿ��� �Ѿ!
			}
		}
	}

	return answer;
}

void main() {
	int ans;

	// jack���� continue ���� 2�� ������
	char* names[] = { "james", "luke", "oliver", "jack" }; 
	ans = solution(names, 4);
	printf("%d", ans); // 3
}