// 목재소의 매출액 구하는 함수 수정하기
// 목재의 개수 N 과 주문 받은 목재 길이를 저장한
// 리스트 orders 가 매개변수로 전달될 때 매출액을 return

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int a[], int n, int length) {
	for (int i = 0; i < n; i++) {
		if (a[i] >= length) {
			return i;
		}
	}
	return -1;
}
int solution(int N, int orders[], int orders_len) {
	int answer = 0;
	int* material = (int*)malloc(sizeof(int) * N);
	int k = 0;
	int price = 0;
	for (int i = 0; i < N; i++) material[i] = 8;// 처음 각 목재의 길이는 8 이다.
	for (int i = 0; i < orders_len; i++)
	{
		k = func_a(material, N, orders[i]);
		if (k >= 0) {
			material[k] -= orders[i];
			price += 3000 * orders[i];
		}
		printf("%d - ", orders[i]);
		for (int k = 0; k < N; k++) {
			printf("[%d]", material[k]);
		}
		printf("\n");
	}
	return price;
}


int main() {
	int arr[] = { 1, 5, 2, 4, 1, 5, 8, 7 };
	int N = 3;
	int ret = solution(N, arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d \n", ret);
}