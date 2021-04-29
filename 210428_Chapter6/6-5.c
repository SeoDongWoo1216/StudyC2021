// break와 continue 문
#include<stdio.h>

int main() 
{
	int i;						// 반복 횟수를 세기 위한 제어 변수
	int sum = 0;				// 1~10까지 합을 누적할 변수

	for (i = 1; i <= 10; i++)
	{
		sum += i;				// i가 1~10까지 증가하면서 10번 반복
		if (sum > 30) break;	// 누적한 값이 30보다 크면 반복문을 끝냄
	}
	
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}