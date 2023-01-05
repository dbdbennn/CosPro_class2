#include <stdio.h>

// 야구 게임의 볼 판정 함수 수정하기
// 숫자와 자리가 같으면 스트라이크
// 숫자는 같으나 자리가 다르면 볼

int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;
	result[1] = 0;
	for (int i = 0; i < 3; i++) {
		temp = b;
		// 세 자릿수로 계속 들어옴
		for (int k = 0; k < 3; k++) {
			if (a % 10 == temp % 10) {
				if (i == k) result[0]++; // 자리 같으면 스트라이크
				else result[1]++; // 자리 같지 않으면 볼
			}
			temp /= 10;
		}
		a /= 10; 
		// for문을 나와 10으로 나누면 한자리 수씩 비교함
	}
	return result;
}

int main() {
	int* result = solution(326, 823);
	printf("Strike: %d, Ball: %d \n", result[0], result[1]);
}