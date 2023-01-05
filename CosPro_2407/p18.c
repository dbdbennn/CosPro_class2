#include <stdio.h>

// 이름에 특정 문자가 포함된 사람의 수를 구하는 함수 수정하기
// 이름에 j나 k 있는 사람 수 구함

int solution(char* name_list[], int name_list_len) {
	int answer = 0;

	for (int i = 0; i < name_list_len; ++i) {
		for (int j = 0; name_list[i][j] != 0; ++j) {
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break; // continue -> break
				// continue를 하면 이름을 끝까지 탐색하게 됨
				// 그러면 j와 k가 여러번 들어간 경우 
				// 들어간 만큼 answer++; 하게 됨

				// break하면 다음 문자열로 넘어감!
			}
		}
	}

	return answer;
}

void main() {
	int ans;

	// jack에서 continue 쓰면 2번 더해짐
	char* names[] = { "james", "luke", "oliver", "jack" }; 
	ans = solution(names, 4);
	printf("%d", ans); // 3
}