/*
포인터 배열 : 포인터를 모아놓은 '배열'
배열 포인터 : 배열을 가리키는 '포인터'
*/

#include <stdio.h>

int main() 
{
	char* pary[5];					// 포인터 배열 선언. pointer와 array의 약어로 pary
	int i;							// 반복 제어 변수

	pary[0] = "dog";				// 배열 요소에 문자열 대입
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++) 
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}