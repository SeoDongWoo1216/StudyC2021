#include <stdio.h>
     
// 5부터 시작했을때 *****
// 0부터 시작했을때     *
int main()
{
	int i, j, k, l;

	printf("--------------------------------\n");

	// 1부터 시작하는 오른쪽계단
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 5부터 시작하는 오른쪽계단
	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("--------------------------------\n");
	
	// 피라미드 만들기
	/*
	피라미드를 출력하는데 위, 아래 피라미드로 짤라서 2개의 for문으로 출력했습니다.
	각 하나의 반쪽 피라미드는 3부분으로 나눠서 띄어쓰기, 왼쪽계단, 오른쪽계단으로 출력했습니다.
	*/
	

	// 윗 피라미드
	for (i = 0; i < 6; i++) 
	{
		for (k = 5; k > i; k--)   // 띄어쓰기(5부터)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)  // 왼쪽계단 별찍기(0부터)
		{
			printf("*");
		}
		for (l = 0; l < i; l++)   // 오른쪽계단 별찍기(0부터)
		{
			printf("*");
		}
		printf("\n");
	}
	
	// 아래 피라미드
	for (i = 0; i < 6; i++)
	{
		for (k = 0; k < i+1; k++) {     // 띄워쓰기(0부터)
			printf(" ");
		}
		for (j = 5 - 1; j > i ; j--) 
		{
			printf("*");
		}
		for (l = 5 - 1; l >= i; l--) {
			printf("*");
		}
		printf("\n");
	}


	
	return 0;
}