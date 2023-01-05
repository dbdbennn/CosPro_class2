#include <stdio.h>
/*
void swap(int a, int b) {
	int temp = a;

	a = b;
	b = temp;

	printf("함수 안에서의 처리 : %d, %d\n", a, b);
}

int main() {
	int a = 5, b = 8;
	printf("함수 호출 전 %d, %d\n", a, b);

	swap(a, b);
	printf("함수 호출 후 %d, %d\n", a, b);
}
*/

void swap(int* pa, int* pb) {
	int a = *pa; // 5
	int b = *pb; // 8

	*pa = b; // a 주소에 8넣음
	*pb = a; // b 주소에 5넣음
}

int main() {
	int a = 5, b = 8;
	printf("함수 호출 전 %d, %d\n", a, b);

	// 주소 값을 전달함
	swap(&a, &b);
	printf("함수 호출 후 %d, %d\n", a, b);
}