#include <stdio.h>

// �Ÿ� ���̸� ���ϴ� �Լ� ��ĭ ä���
// ���޵Ǵ� �ӵ��� km/hour ������ 1 ~ 10 ���� �����̴�.
// ���޵Ǵ� �ӵ��� ���� ���� ����.

// �Ÿ� ���� ���ϴ� �Լ�
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
	printf("%lf ��\n", ret);
}