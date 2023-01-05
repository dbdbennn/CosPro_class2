#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 문자열 내 특정 문자를 바꾸는 함수 수정 */

char* solution(char* s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));	strcpy(s_ret, s);
	strcpy(s_ret, s);

	for (int i = 0; s_ret[i] != 0; ++i) {
		if (s_ret[i] == 'a')
			s_ret[i] = 'z';
		else if (s_ret[i] == 'z')
			s_ret[i] = 'a';
	}

	return s_ret;
}

void main() {
	char* data = "azera";
	char* ans = solution(data);
	printf("%s -> %s",data, ans);
}