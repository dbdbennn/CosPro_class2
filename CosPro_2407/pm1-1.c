#include <stdio.h>

// 거스름돈을 계산하는 함수 작성하기

int solution(int price[], int price_len, int money) {
	int answer = 0;
	int tot = 0;

	for (int i = 0; i < price_len; i++) {
		tot += price[i];
	}
	printf("총 가격 : %d\n", tot);
	
	answer = (money <= tot) ? -1 : money - tot;

	return answer;
}

int main(){
	int price[] = { 1000,1200,800,500,2000 };
	int len = sizeof(price) / sizeof(price[0]);
	int money = 10000;
	int result = solution(price, len, money);
	printf("%d \n", result);
	return 0;
}