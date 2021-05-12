// 프로젝트 -> (프로젝트이름)속성 -> C/C++ -> 일반 -> SDL 검사 -> 아니오
// scanf 보안관련 오류를 없애줄 수 있음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "user.h"

int main() 
{
	int n1, n2;
	int result;

	input_data(&n1, &n2);  // 주소값을 inputData.c에 넘겨줌
	result = sum(n1, n2);

	printf("두 정수의 합 : %d", result);

	return 0;
}