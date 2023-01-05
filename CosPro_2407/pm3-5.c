#include <stdio.h>

// 카드 게임 승자 알아내는 함수 작성하기
// 민호가 이긴 경우 1, 민희가 이긴 경우 0, 
// 무승부인 경우 - 1 을 return

/*
1) 게임 도중 카드의 순서를 바꿀 수는 없다.
2) 첫 번째 놓인 카드부터 시작하여 순서대로 뒤집는다.
3) 카드를 뒤집어서 표시된 수가 높은 쪽이 승리하며 같은 경우에는 무승부로 한다.
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

	printf("민호 : %d\n민희 : %d\n", mho_win, mhe_win);
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
	printf("결과 : %d \n", result);
}