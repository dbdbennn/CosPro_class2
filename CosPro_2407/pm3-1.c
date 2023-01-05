#include <stdio.h>

// 거리 차이를 구하는 함수 빈칸 채우기
// 전달되는 속도는 km/hour 단위로 1 ~ 10 사이 정수이다.
// 전달되는 속도가 같은 경우는 없다.

// 거리 차이 구하는 함수
double solution(int a, int b) {
	double answer = 0;
	int diff = (a < b) ? b - a : a - b;
	answer = 10.0 / diff;
	return answer * 60;
}

int main() {
	int kim_speed = 10;
	int gun_speed = 13;
	double ret = solution(kim_speed, gun_speed);
	printf("%lf 분\n", ret);
}