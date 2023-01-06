// KTX 열차 승차 인원 구하는 함수 빈칸 채우기
// 입석인 사람이 가장 많을 때가 몇 명인지를 파악하려고 합니다.
// 6개의 차량을 연결하여 운행하며 각 차량은 40개의 좌석이 있습니다.

#include <stdio.h>

int solution(int down[], int up[], int N) {
	int answer = 0;
	int stand;
	int passenger = 0;
	for (int i = 0; i < N; ++i) {
		passenger += up[i] - down[i];
		stand = passenger - 240; 
		if (stand > 0 && stand > answer) { // stand 가 < 0 이면 여분 좌석이 있음
			answer = stand;
		}
	}
	return answer;
}

int main() {
	int down[] = { 0,40,100,30 };
	int up[] = { 240,120,60,20 };
	int ret = solution(down, up, sizeof(up) / sizeof(up[0]));
	printf("%d \n", ret);
}