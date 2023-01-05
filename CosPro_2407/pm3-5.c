#include <stdio.h>

// ī�� ���� ���� �˾Ƴ��� �Լ� �ۼ��ϱ�
// ��ȣ�� �̱� ��� 1, ���� �̱� ��� 0, 
// ���º��� ��� - 1 �� return

/*
1) ���� ���� ī���� ������ �ٲ� ���� ����.
2) ù ��° ���� ī����� �����Ͽ� ������� �����´�.
3) ī�带 ����� ǥ�õ� ���� ���� ���� �¸��ϸ� ���� ��쿡�� ���ºη� �Ѵ�.
*/

int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int result = -1;
	int mho_win = 0;
	int mhe_win = 0;

	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] > mhe_arr[i]) {
			mho_win++;
		}
		else if (mho_arr[i] < mhe_arr[i]) {
			mhe_win++;
		}
	}

	printf("��ȣ : %d\n���� : %d\n", mho_win, mhe_win);
	if (mho_win > mhe_win) {
		return 1;
	}
	else if(mho_win < mhe_win){
		return 0;
	}

	return -1;
}

int main() {
	int mho_arr[] = { 1,6,11,12,2,7,8,9,10,3,4,5,13 };
	int mhe_arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int arr_len = sizeof(mho_arr) / sizeof(mho_arr[0]);
	int result = solution(mho_arr, mhe_arr, arr_len);
	printf("��� : %d \n", result);
}