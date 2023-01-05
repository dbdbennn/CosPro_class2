#include <stdio.h>

// 문자열 내의 지정하는 문자들이 있는지 확인하는 함수 수정하기
// 문자열 pass 와 지정 문자열 key 가 매개변수
// key의 문자가 포함된 경우 1, 그렇지 않은 경우 0을 return
// pass 문자열에는 key 문자가 각각 최소 1개 이상 있어야 함

int solution(char pass[], char key[]) {
	int answer = 0;
	int match_cnt = 0;
	for (int i = 0; key[i] != 0; ++i) {
		for (int k = 0; pass[k] != 0; ++k) {
			if (key[i] == pass[k]) {
				match_cnt++;
				break; // break -> i++, k=0부터 반복

				// 해당하는 key값과 같은 것을 찾으면
				// break하여 다음 key값으로 넘어가
				// 같은 key에 해당하는 문자열이 여러번  
				// 중복되어 더해지는 것을 방지함
			}
		}
	}

	if (match_cnt >= strlen(key)) answer = 1;
	// 비밀번호 문자열에는 각각의 문자가 최소 1개 이상 있어야 함
	return answer;
}

int main() {
	char pass[] = "z9xcGvadsf#qer";
	char key[] = "Ga#9";
	int result = solution(pass, key);
	printf("%d \n", result);
}