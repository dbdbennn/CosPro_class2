#include <stdio.h>

// 3개 사면 추가 하나는 50 % 할인 행사의 금액을 계산하는 함수의 빈칸 채우기
// 3 개를 사면 추가로 하나의 상품을 50% 할인된 가격


#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int solution(int arr[], int arr_len) {
	int answer = 0;
	int price;
	for (int i = 0; i < arr_len; i++) {
		price = arr[i];
		if ((i + 1) % 4 == 0) { // 인덱스는 0부터 이므로
			printf("%d 개째네요 원래 %d 인데 깎아드릴게요\n", (i+1), price);
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