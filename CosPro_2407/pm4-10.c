#include <stdio.h>
#include <stdlib.h>

// �߰���� ������ ���� �������� ��� ���ϴ� �Լ� �ۼ��ϱ�
// ���� ���� ��� ���� ���� ���� �ݴ� ���� ���� 
// ��ü �л� �� ������ �����(%)�� ��Ÿ������ �մϴ�.

int* solution(int a[][3], int b[][3], int len) {
	int* answer = (int*)malloc(sizeof(int) * 2);
	int tot = 0;
	int po_tot = 0;
	int na_tot = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 3; j++) {
			tot += a[i][j] + b[i][j];
			po_tot += a[i][j];
			na_tot += b[i][j];
		}
	}
	// ����
	answer[0] = (int)((double)po_tot / tot * 100);
	answer[1] = (int)((double)na_tot / tot * 100);

	return answer;
}

int main() {
	int po[4][3] = { 3,2,7,4,2,6,5,3,8,7,6,8 };
	int na[4][3] = { 30,50,120,7,9,1,1,1,2,2,2,4 };
	int* result = solution(po, na, sizeof(po) / sizeof(po[0]));
	printf("%d %d \n", result[0], result[1]);
}