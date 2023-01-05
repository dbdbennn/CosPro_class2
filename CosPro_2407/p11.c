#include <stdio.h>

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; i++) {
		sum += i;
	}
	return sum;
}

int solution(int n, int m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n - 1);
	int answer = sum_to_m - sum_to_n;

	return answer;
}

int main(void) {
	int ans;
	ans = solution(5, 10);
	printf("%d", ans);
}

/*
자연수의 합계 구하기 5에서 10까지의 합계
-> (1+2+3+4+5+6+7+8+9+10) - (1+2+3+4) = 5+6+7+8+9+10
*/