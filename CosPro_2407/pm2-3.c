#include <stdio.h>

int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(___________________________)
		int idx = 0;
	for (int i = 0; i < arr_size; ++i)
		if (___________________) // arr �迭���� num�� �����ϰ� ����
			ret[idx++] = arr[i];
	return ret;
}
int func_b(int a, int b) { // �� ���� ����(������ ���)�� ��ȯ�ϴ� �Լ�
	if (_______________)
		return a - b;
	else
		return b - a;
}
int func_c(int arr[], int arr_size) { // arr �迭 ��� �� �ִ밪�� ��ȯ�ϴ� �Լ�
	int ret = -1;
	for (int i = 0; i < arr_size; ++i)
		if (ret < arr[i])
			ret = arr[i];
	return ret;
}