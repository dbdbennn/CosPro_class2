#include <stdio.h>

// �����԰� ū ����� ���� ���ϴ� �Լ� �����ϱ�
// k���� �����԰� ū �л��� ���� ���� return


int solution(int weight[], int weight_len, int k) {
	int answer = 0;
	for (int i = 0; i < weight_len; ++i)
		if (weight[i] > k)
			answer++;
	return answer;
}

int main() {
	int weight[] = { 65,74,83,56,77 };
	int k = 70;
	int result = solution(weight,
		sizeof(weight) / sizeof(weight[0]), k);
	printf("%d \n", result);
}