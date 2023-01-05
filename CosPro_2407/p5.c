#include <stdio.h>

/*
369게임을 할 때,
주어진 숫자까지 몇 번 박수를 치는지
count해 return함
*/

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (current%10 == 3 || current % 10 == 6 || current % 10 == 9) {
				count++;
			}
			current /= 10;
		} // while 종료
	} // for 종료

	return count;
}

void main() {
	int ans;
	ans = solution(13);
	printf("%d", ans);
}