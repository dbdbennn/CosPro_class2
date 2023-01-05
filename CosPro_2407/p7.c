#include <stdio.h>
/*
배열을 reverse함
*/
int* solution(int arr[], int arr_len) {
	int left = 0; 
	int right = arr_len - 1;
	while (left < right) { // (left <= right) 가능
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	return arr;
}

void main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int arr_len = sizeof(arr) / sizeof(typeof(arr));
	solution(arr, arr_len);
	for (int i = 0; i < arr_len; i++) {
		printf("%4d", arr[i]);
	}
}