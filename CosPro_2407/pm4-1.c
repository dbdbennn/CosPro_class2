#include <stdio.h>

// 카드 숫자 조합하여 홀수의 개수를 구하는 함수 빈칸 채우기
// 다섯 장의 카드를 하나의 세트로 하며 중복되는 숫자는 없음
// 그 중 3장의 카드를 골라 적힌 숫자의 합이 
// 홀수인 경우가 몇 번인지

int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 3; i++) // 3 자리 숫자를 뽑음
		for (int k = i + 1; k < 5; k++) // 첫 번째 값을 뺀 나머지 값으로 조합함
			for (int m = k + 1; m < 5; m++) { // 첫 번째, 두 번째 값을 뺀 나머지 값으로 조합함
				printf("[%d %d %d] = %d\n", cards[i], cards[k], cards[m],
					(cards[i] + cards[k] + cards[m]));
				if ((cards[i] + cards[k] + cards[m]) % 2) // 나머지가 있으면 홀수
					answer++;
			}
	return answer;
}

int main() {
	int cards[5] = { 7,5,6,4,9 };
	int result = solution(cards);
	printf("%d \n", result);
	return 0;
}