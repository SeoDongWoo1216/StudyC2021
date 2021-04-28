#include<stdio.h>
int main() {
	int a = 10, b = 20;

	if (a < 0)         // a가 0보다 작으면
	{
		if (b > 0)     // b가 0보다 크면 ok 출력
		{
			printf("ok");
		}
	}
	else               // a가 0 이상이면 ok 출력
	{
		printf("ok");
	}

	return 0;
}