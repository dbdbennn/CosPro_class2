#include <stdio.h>

// 무게를 재기 위해 필요한 추의 개수를 구하는 함수 빈칸 채우기
// 가장 적은 추의 개수를 return
// 남아있는 추로 무게를 젤 수 없는 경우 0 을 반환

// 비슷한 것 : 동전 거스름돈, 나무 자르기, 문자열 길이
int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;
	for (int i = arr_len - 1; i >= 0; i--) {
		diff = payload - weight;
		if (diff >= arr[i]) {
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload)
		cnt = 0;

	return cnt;
}

int main() {
	int arr[] = { 1,2,3,5,7,11,13,17,19,23 };
	// 10 단위로 solution 에 넣어줌
	for (int i = 10; i <= 100; i += 10) {
		int result = solution(arr, sizeof(arr) / sizeof(arr[0]), i);
		printf("%d - %d \n", i, result);
	}
}