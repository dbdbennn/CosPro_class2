#include <stdio.h>

// 문자열 내 문자들 바꾸는 함수 빈칸 채우기
// 첫 글자와 다른 글자를 계속 더해주는 식으로
// 암호화하는 함수

// 첫 글자와 다른 글자를 더한 값으로 바꿈

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1; src[i] != 0; ++i) {
		dest[i] = src[i] + dest[0]; // kokrkek 이런 식
	}
	dest[i] = 0;
	return 0;
}
char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char) * (strlen(string) + 1));
	func_a(encoded, string);
	return encoded;
}

int main() {
	char string[] = "korean fighting";
	char* result = solution(string);
	printf("%s \n", result);
}