#include <stdio.h>

// ��޿� ���� �������� ����� ���� ������ return

int solution(int price, char* grade) {
	if (strcmp("S", grade) == 0) {
		return (int)price * 0.95;
	}
	else if (strcmp("G", grade) == 0) {
		return (int)price * 0.9;
	}
	else if (strcmp("V", grade) == 0) {
		return (int)price * 0.85;
	}
}

void main(void) {
	char* grade = "S";
	int price = 10000;
	int answer = solution(price, grade);
	printf("%d��", answer);
}