#include <stdio.h>

// 문자열들을 처리하는 시간 구하는 함수 수정하기
// 1대의 컴퓨터가 길이 4인 문자열을 처리하는데 1분이 걸림

int solution(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]); // 문자열의 길이 구함
		result += (len / 4); // 문자열 길이를 4로 나눔
		if (len % 4) // 4로 나눴을 때 나머지가 있다면 
					 // 1분 추가
					 // == 0 -> 지움
			result++;
	}
	return result;
}

int main() {
	const char* strings[] = { "1234","123456","123456789" };
	int result = solution(strings, 3);
	printf("%d \n", result);
}