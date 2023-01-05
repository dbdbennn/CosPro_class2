#include <stdio.h>

// 1학년부터 5학년까지 같은 반이었던 적이 가장 많은 학생 찾기

int solution(int table[][5], int table_len) {
	int answer = 0; // 학생 누구인지 찾기 (index와 같음)
	int max = 0; // 가장 많이 된 횟수
	int sum;

	for (int i = 1; i < table_len; i++) {
		sum = 0;
		for (int k = 0; k < 5; k++) {
			if (table[0][k] == table[i][k]) {
				sum++;
			}
		}
		if (max < sum) {
			max = sum;
			answer = i;
		}
	}
	return answer;
}

int main() {
	int table[6][5] = {
	{2,6,1,7,3},// 선생님
	{2,9,4,6,8},// 학생 1
	{6,3,4,7,1},// 학생 2
	{7,7,1,1,2},// 학생 3
	{8,6,9,7,3},// 학생 4
	{4,6,5,9,2}// 학생 5
	};
	int result = solution(table, 6);
	printf("%d \n", result);
}