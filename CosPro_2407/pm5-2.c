#include <stdio.h>

// 3�� ��� �߰� �ϳ��� 50 % ���� ����� �ݾ��� ����ϴ� �Լ��� ��ĭ ä���
// 3 ���� ��� �߰��� �ϳ��� ��ǰ�� 50% ���ε� ����


#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int solution(int arr[], int arr_len) {
	int answer = 0;
	int price;
	for (int i = 0; i < arr_len; i++) {
		price = arr[i];
		if ((i + 1) % 4 == 0) { // �ε����� 0���� �̹Ƿ�
			printf("%d ��°�׿� ���� %d �ε� ��Ƶ帱�Կ�\n", (i+1), price);
				price /= 2;
		}
		answer += price;
	}
	return answer;
}

int main() {
	int arr[] = { 100, 500, 200, 400, 100, 500, 200, 400 };
	int ret = solution(arr, sizeof(arr) /
		sizeof(arr[0]));
	printf("%d \n", ret);
}