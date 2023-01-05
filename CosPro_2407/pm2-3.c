#include <stdio.h>

int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(___________________________)
		int idx = 0;
	for (int i = 0; i < arr_size; ++i)
		if (___________________) // arr 배열에서 num을 제외하고 복사
			ret[idx++] = arr[i];
	return ret;
}
int func_b(int a, int b) { // 두 값의 차이(뺄셈의 결과)를 반환하는 함수
	if (_______________)
		return a - b;
	else
		return b - a;
}
int func_c(int arr[], int arr_size) { // arr 배열 요소 중 최대값을 반환하는 함수
	int ret = -1;
	for (int i = 0; i < arr_size; ++i)
		if (ret < arr[i])
			ret = arr[i];
	return ret;
}