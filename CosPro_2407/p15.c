#include <stdio.h>

/* �������� ������ ȸ���� ���ϴ� �Լ��� ��ĭ�� ä��� */

int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;
	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}
	return cnt;
}

void main() {
	int stones[] = { 2, 5, 1, 3, 2, 1 };
	for (int i = 0; i < sizeof(stones) / sizeof(int); i++) {
		printf("%3d", stones[i]);
	}
	printf("\n�������� �� Ƚ�� : ");
	int ans = solution(stones, 6);
	printf("%d", ans);
}