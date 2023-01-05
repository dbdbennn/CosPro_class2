#include <stdio.h>

// 몸무게가 큰 사람의 수를 구하는 함수 수정하기
// k보다 몸무게가 큰 학생의 수를 세서 return


int solution(int weight[], int weight_len, int k) {
	int answer = 0;
	for (int i = 0; i < weight_len; ++i)
		if (weight[i] > k)
			answer++;
	return answer;
}

int main() {
	int weight[] = { 65,74,83,56,77 };
	int k = 70;
	int result = solution(weight,
		sizeof(weight) / sizeof(weight[0]), k);
	printf("%d \n", result);
}