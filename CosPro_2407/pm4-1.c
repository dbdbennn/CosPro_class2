#include <stdio.h>

// ī�� ���� �����Ͽ� Ȧ���� ������ ���ϴ� �Լ� ��ĭ ä���
// �ټ� ���� ī�带 �ϳ��� ��Ʈ�� �ϸ� �ߺ��Ǵ� ���ڴ� ����
// �� �� 3���� ī�带 ��� ���� ������ ���� 
// Ȧ���� ��찡 �� ������

int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 3; i++) // 3 �ڸ� ���ڸ� ����
		for (int k = i + 1; k < 5; k++) // ù ��° ���� �� ������ ������ ������
			for (int m = k + 1; m < 5; m++) { // ù ��°, �� ��° ���� �� ������ ������ ������
				printf("[%d %d %d] = %d\n", cards[i], cards[k], cards[m],
					(cards[i] + cards[k] + cards[m]));
				if ((cards[i] + cards[k] + cards[m]) % 2) // �������� ������ Ȧ��
					answer++;
			}
	return answer;
}

int main() {
	int cards[5] = { 7,5,6,4,9 };
	int result = solution(cards);
	printf("%d \n", result);
	return 0;
}