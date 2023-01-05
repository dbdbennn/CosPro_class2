#include <stdio.h>

// 거스름돈을 계산하는 함수 작성하기

int solution(int price[], int price_len, int money) {
	int tot = 0;

	// 1> price 배열 요소들의 총합구하기
	for (int i = 0; i < price_len; i++)
		tot += price[i];

	// 2> 전달받은 money와 계산하여 거스름돈 구하기
	// 3 > money가 작으면 return -1
	return (money <= tot) ? -1 : money - tot;
}

void main() {
	int ans;
	int price[] = { 2100, 3200, 2100, 800 };
	ans = solution(price, 4, 10000);
	printf("거스름 돈 : %d원", ans);
}