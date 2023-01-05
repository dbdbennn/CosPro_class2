#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
A대학에서는 수준별 영어 강의를 제공하고 있습니다.
초급 영어 강의는 토익시험에서 650점 이상 800점 미만의 성적을 취득한 학생만을 수강대상으로 하고 있습니다.
초급 영어 강의에 수강신청한 사람이 10명일 때, 이 중에서 몇명이 수강 대상에 해당하는지 확인하려합니다.
수강신청자들의 토익 성적이 들어있는 배열 scores와 scores의 길이 scores_len이 매개변수로 주어질 때, 
수강 대상자들의 인원수를 return 하도록 주어진 solution함수를 작성했습니다. 
그러나, 코드 일부분이 잘못되어있기 때문에, 몇몇 입력에 대해서는 올바르게 작동하지 않습니다. 
주어진 코드에서 한 줄만 변경해서 모든 입력에 대해 올바르게 동작하도록 수정해주세요.
*/

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++)
		// || -> &&
		if (650 <= scores[i] && scores[i] < 800) 
			count += 1;
	return count;
}

int main() {
	int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int scores_len = 10;
	int ret = solution(scores, scores_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}