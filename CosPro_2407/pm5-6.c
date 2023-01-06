// KTX ���� ���� �ο� ���ϴ� �Լ� ��ĭ ä���
// �Լ��� ����� ���� ���� ���� �� �������� �ľ��Ϸ��� �մϴ�.
// 6���� ������ �����Ͽ� �����ϸ� �� ������ 40���� �¼��� �ֽ��ϴ�.

#include <stdio.h>

int solution(int down[], int up[], int N) {
	int answer = 0;
	int stand;
	int passenger = 0;
	for (int i = 0; i < N; ++i) {
		passenger += up[i] - down[i];
		stand = passenger - 240; 
		if (stand > 0 && stand > answer) { // stand �� < 0 �̸� ���� �¼��� ����
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