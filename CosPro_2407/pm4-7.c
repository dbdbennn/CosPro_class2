#include <stdio.h>
#include <stdlib.h>

// 화면 내 이동시 x와 y가 같은 위치 개수 구하는 함수 수정하기
// 가로 1024, 세로 768 길이

//‘w' 화면 위로 이동, ‘a' 화면 왼쪽으로 이동, ‘s' 화면 아래로 이동,
//‘d' 화면 오른쪽으로 이동

// x, y 가 같은 지점이 몇 번 있었는지를 return

int solution(char input[], int arr_len) {
	int answer = 0;
	int x, y;
	x = y = 0;
	for (int i = 0; input[i]; ++i) {
		if (input[i] == 'w') y++; // 위
		else if (input[i] == 's') y--; // 아래
		else if (input[i] == 'a') x--; // 왼
		else if (input[i] == 'd') x++; // 오
		if (y == x) {
			printf("%d, %d\n", x, y);
			answer++;
		}
	}
	return answer;
}

int main() {
	char arr2[80] = "waawsddsassadw3wd";
	int result = solution(arr2, 80);
	printf("%d \n", result);
}