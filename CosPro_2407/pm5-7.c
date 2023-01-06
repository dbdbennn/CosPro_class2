// 판매 이익금을 구하는 함수 수정하기

// 상품의 원가와 구매 수량을 담은 리스트 price 가 매개변수로 
// 전달될 때 가장 작은 이익금이 얼마인지를 return

#include <stdio.h>
#include <stdlib.h>

double func_a(double a[], int n) {
	double min;
	min = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
int solution(int price[][2], int price_len) {
	double* sales = (double*)malloc(sizeof(double) * price_len);
	double percent;
	for (int i = 0; i < price_len; ++i) {
		if (price[i][0] < 5000) percent = 0.25;
		else if (price[i][0] < 15000) percent = 0.20;
		else if (price[i][0] < 100000) percent = 0.15;
		else percent = 0.1;
		sales[i] = price[i][0] * percent * price[i][1]; // + -> *
		//< --가격 × 이익률 × 수량
	}
	return (int)func_a(sales, price_len);
}

int main() {
	int price[][2] = { {6000, 20},{80000,100},{4000,90} };
	int ret = solution(price, sizeof(price) / sizeof(price[0]));
	printf("%d \n", ret);
}
