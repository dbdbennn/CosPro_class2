#include <stdio.h>

/*
int isTimeofTwo(int n) {
	return (n % 2 == 0) ? 1 : 0;
}

int main() {
	if (isTimeofTwo(10) == 1) {
		printf("2의 배수 ");
	}
	else {
		printf("2의 배수 아님");
	}
}
*/
// 함수의 매개변수 전달 
// 1. 값에 의한 전달 -> 값을 복사하고 전달 -> 매개변수 일반형

int Add(int x, int y) {
	return x + y;
}

int main() {
	int x = 5, y = 7, z;
	z = Add(x, y);
	printf("%d + %d = %d", x, y, z);

	return 0;
}