/*
	do~while문은 반복할 문장을 수행한 후에 조건을 검사한다.
	조건식과 관계없이 반복할 문장을 최소 한번은 실행한다.

*/
#include<stdio.h>

int main() {
	int a = 1;

	do
	{
		a = a * 2;
	} 	while (a < 10);

	printf("a : %d\n", a);

	return 0;
}