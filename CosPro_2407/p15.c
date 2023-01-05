#include <stdio.h>

/* 개구리가 점프한 회수를 구하는 함수의 빈칸을 채우기 */

int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;
	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}
	return cnt;
}

void main() {
	int stones[] = { 2, 5, 1, 3, 2, 1 };
	for (int i = 0; i < sizeof(stones) / sizeof(int); i++) {
		printf("%3d", stones[i]);
	}
	printf("\n개구리가 뛴 횟수 : ");
	int ans = solution(stones, 6);
	printf("%d", ans);
}