#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// ´ë°ýÈ£ ½ÖÀÇ °³¼ö¸¦ ¼¼´Â ÇÔ¼ö ºóÄ­ Ã¤¿ì±â

int func_a(char s[]) {
	int cnt = 0;
	for (int i = 0; s[i] != 0; ++i) {
		if (s[i] == '[') {
			cnt++;
		}
		if (s[i] == ']') {
			cnt--;
		}
	}
	return cnt;
}
int solution(char string[]) {
	int answer = 0;
	if (func_a(string)) {
		return -1;
	}

	for (int i = 0; i < strlen(string); ++i) {
		if (string[i] == ']') {
			answer++;
		}
	}
	return answer;
}


int main() {
	char string[] = "[kim[10, 20, 30], mong[2, 3, 4, 5, 6] ]";
		int result = solution(string);
	printf("%d \n", result);
	return 0;
}