#include <stdio.h>

int solution(char* name_list[], int name_list_len) {
	int answer = 0;
	for (int i = 0; i < name_list_len; ++i)
		for (int j = 0; name_list[i][j] != '\0'; ++j) // < --각 행은 문자열이다.
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				printf("%s \n", name_list[i]);
				break;
			}
	return answer;
}

int main() {
	char* string[] = { "korean","fighting","india","japan","hongkong" };
	int len = sizeof(string) / sizeof(string[0]);
	int result = solution(string, len);
	printf("%d \n", result);

}