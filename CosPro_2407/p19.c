#include <stdio.h>

// �Ž������� ����ϴ� �Լ� �ۼ��ϱ�

int solution(int price[], int price_len, int money) {
	int tot = 0;

	// 1> price �迭 ��ҵ��� ���ձ��ϱ�
	for (int i = 0; i < price_len; i++)
		tot += price[i];

	// 2> ���޹��� money�� ����Ͽ� �Ž����� ���ϱ�
	// 3 > money�� ������ return -1
	return (money <= tot) ? -1 : money - tot;
}

void main() {
	int ans;
	int price[] = { 2100, 3200, 2100, 800 };
	ans = solution(price, 4, 10000);
	printf("�Ž��� �� : %d��", ans);
}