#include <stdio.h>

// A는 1시간, B는 2시간, C는 4시간이 걸릴 때, 
// 모든 벽을 칠하는데 걸리는 시간은?

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i / 2) + (i / 4);
	}
	answer = i - 1; 
	// for문에서 i++을 한 번 더 하고 나오기 때문에
	// i - 1 해줌
	return answer;
}

int main() {
	int walls = 5;
	int ret = solution(walls);
	printf("%d개의 벽을 칠하는 데 걸린 시간 : %d시간 \n", walls, ret);
}