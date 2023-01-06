// 전화번호 형식 맞추어 변경하는 함수 수정하기

// 1) 가지고 있는 명함의 휴대전화번호는 국가, 지역을 의미하는 기호나 숫자는 없다.
// 2) 모든 휴대전화는 ‘0＇으로 시작되어야 한다.
// 3) A - B - C의 형식으로 A는 3자리, B와 C는 4자리이다.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(char dest[], char src[]) {
	int k = 0;
	for (int i = 0; src[i] != 0; i++) {
		if ('0' <= src[i] && src[i] <= '9') dest[k++] = src[i];
	}
	dest[k] = 0;
	return k;
}
char* solution(char number[]) {
	char* copy = (char*)malloc(sizeof(char) * (strlen(number) + 1));
	char* answer = (char*)malloc(sizeof(char) * 14);
	int k = 0;
	if (number[0] != '0') copy[k++] = '0';
	func_a(copy + k, number); // 위 조건에 따라 저장할 위치가 바뀐다.
	if (strlen(copy + 3) < 8) answer[4] = '0';
	k = 0;
	for (int i = 0; copy[i] != 0; i++) {
		answer[k++] = copy[i];
		if (k == 3 || k == 8) {
			answer[k++] = '-';
		}
		if (k == 4 && answer[k] == '0')k++;
	}
	answer[k] = 0;
	free(copy);
	return answer;
}

int main() {
	char number[] = "010-111-2222";
	char* ret = solution(number);
	printf("%s \n", ret);
}