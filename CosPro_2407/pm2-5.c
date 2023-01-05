#include <stdio.h>
// 가장 많은 글을 작성한 회원의 글 개수는 
// 가장 적게 작성한 회원의 글 개수의 몇 배인지

int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001); // int count[1001] 배열 생성
	for (int i = 0; i < 1001; i++) // 배열 초기화
		counter[i] = 0;
	for (int i = 0; i < arr_len; i++)
		counter[arr[i]]++; // 전달받은 배열 속 자연수의 개수를 저장
	return counter;
}
int func_b(int arr[], int arr_len) {
	int ret = 0;
	for (int i = 0; i < arr_len; i++) { // 전달받은 배열 arr의 길이만큼 반복
		if (ret < arr[i]) // arr 배열 [i]번 요소의 값이 ret 값보다 크면
			ret = arr[i]; // ret 변수에 arr 배열 [i] 번 요소의 값을 저장
	}
	return ret;
}
int func_c(int arr[], int arr_len) {
	int ret = 1001;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != 0 && ret > arr[i]) // arr 배열 [i]번 요소의 값이 0이 아니다.
			ret = arr[i];
	}
	return ret;
}

int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, 1001);
	int min_cnt = func_c(counter, 1001);
	return max_cnt / min_cnt;
}


int main() {
	int arr[] =
	{ 100,200,300,400,500,300,10,700 };
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int result = solution(arr, arr_len);
	printf("%d \n", result);

}
