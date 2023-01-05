#include <stdio.h>
#include <stdlib.h>

// 문자열 내 특정 문자를 바꾸는 함수 수정하기

char* solution(char* s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(s_ret, s);
	for (int i = 0; s_ret[i] != 0; ++i) {
		if ('0' <= s_ret[i] && s_ret[i] <= '9') 
			s_ret[i] = 'i' - s_ret[i];
	}
	return s_ret;
}

int main() {
	char string[] = "cos pro 2018 to 2019";
		char* result = solution(string);
	printf("%s \n", result);

}