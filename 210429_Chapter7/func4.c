#include <stdio.h>

int main() 
{
	int a, b;
	a = 10, b = 20;
	int result = 0;

	// func 함수가 res를 return 하기때문에 그 결과값을 result로 받아줌.
	result = func(a, b); 
	printf("result : %d\n", result);

	// printf("%d", func(a, b));  // 위의 코드를 한줄로 줄인 출력문
	
	return 0;
}

int func(int aa, int ab) // 출력이 존재하는 함수이기때문에 return을 사용해야함
{
	int res;
	res = aa + ab;

	return res;
}