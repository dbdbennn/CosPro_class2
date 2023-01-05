#include <stdio.h>

// 1�г���� 5�г���� ���� ���̾��� ���� ���� ���� �л� ã��

int solution(int table[][5], int table_len) {
	int answer = 0; // �л� �������� ã�� (index�� ����)
	int max = 0; // ���� ���� �� Ƚ��
	int sum;

	for (int i = 1; i < table_len; i++) {
		sum = 0;
		for (int k = 0; k < 5; k++) {
			if (table[0][k] == table[i][k]) {
				sum++;
			}
		}
		if (max < sum) {
			max = sum;
			answer = i;
		}
	}
	return answer;
}

int main() {
	int table[6][5] = {
	{2,6,1,7,3},// ������
	{2,9,4,6,8},// �л� 1
	{6,3,4,7,1},// �л� 2
	{7,7,1,1,2},// �л� 3
	{8,6,9,7,3},// �л� 4
	{4,6,5,9,2}// �л� 5
	};
	int result = solution(table, 6);
	printf("%d \n", result);
}