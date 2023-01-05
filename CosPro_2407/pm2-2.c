#include <stdio.h>
#include <stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(;

	for()

	return answer;
}

int main() {
	char* shirtsize[] = { "7","6","9","9","7","6","9","9" };
	int len = sizeof(shirtsize) / sizeof(shirtsize[0]);
	int* result = solution(shirtsize, len);
	for (int i = 0; i < 6; ++i) {
		printf("%d ", result[i]);
	}
	printf("\n");
}