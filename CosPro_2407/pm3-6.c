#include <stdio.h>
#include <stdlib.h>

// 문자열 내 정수들의 총합 구하는 함수 빈칸 채우기

int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; ++i) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = number * 10 + (string[i] - 48);
			// 처음 숫자가 들어올 때는 0*10 -> 0 + 처음 들어온 숫자 됨
			// 숫자가 연달아 나오면, 
			// * 10 연산을 통해
			// 자릿수를 올려줌
			// 그리고 현재 자릿수 값 (string[i] - 48) 을 더함
		}
		else {
			answer += number;
			// 숫자가 끝나면 숫자 한 덩어리가 들어왔다는 뜻으로,
			// answer에 숫자 하나를 더해주는 것이 됨
			number = 0; // 0으로 초기화됨.
		}
	}
	return answer;
}

int main() {
	char string[] = "korea 20/18. 10. 11. pm 1.";
	int result = solution(string);
	printf("%d \n", result);
}