#include <stdio.h>

// A�� 1�ð�, B�� 2�ð�, C�� 4�ð��� �ɸ� ��, 
// ��� ���� ĥ�ϴµ� �ɸ��� �ð���?

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i / 2) + (i / 4);
	}
	answer = i - 1; 
	// for������ i++�� �� �� �� �ϰ� ������ ������
	// i - 1 ����
	return answer;
}

int main() {
	int walls = 5;
	int ret = solution(walls);
	printf("%d���� ���� ĥ�ϴ� �� �ɸ� �ð� : %d�ð� \n", walls, ret);
}