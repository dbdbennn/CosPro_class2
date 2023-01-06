#include <stdio.h>

// 단체 여행 숙소 방의 개수를 구하는 함수 수정하기
// 같은 학년끼리만 방을 배정해야 하며 방 하나에 한 명만 배정하는 것도 가능합니다. 
// 필요한 방의 최소 개수를 구하려고 합니다.

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += (arr[i] / k);
		if (arr[i] % k) answer++;
	}
	return answer;
}

int main() {
	// 1 2 3 4 5 6 학년 인원 수
	int arr[6] = { 13, 16, 9, 2, 10, 7 };
	int result = solution(arr, sizeof(arr) / sizeof(arr[0]), 4);
	printf("%d \n", result);
}