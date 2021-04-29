#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int input = 0;					// 입력받을 변수
	int i, j = 0;					// 구구단 for문에 들어갈 변수
	int repeatNum = 1;
	
	printf("---------------------------------------------\n");
	printf("구구단프로그램\n");
	printf("---------------------------------------------\n");
	printf("출력할 구구단을 입력하세요(1~9단) : ");
	scanf("%d", &input);

	if (input >= 1 && input <= 9)
	{
		printf("%d문을 출력합니다\n", input);
		for (i = 1; i < 10; i++)
		{
		    printf("%d * %d = %d\n", input, i, input * i);
		}
	}
	else
	{
		printf("1부터 9까지의 숫자만 입력해주세요");

	}
	/*while (repeatNum) 
	{
		printf("---------------------------------------------\n");
		printf("구구단프로그램\n");
		printf("---------------------------------------------\n");
		printf("출력할 구구단을 입력하세요(1~9단) : ");
		scanf("%d", &input);

		if (input >= 1 && input <= 9) 
		{
			for (i = 1; i < 10; i++)
			{
				printf("%d문을 출력합니다", input)
				printf("%d * %d = %d\n", input, i, input * i);
			}
		}
		else 
		{
			printf("1부터 9까지의 숫자만 입력해주세요");
			
		}
		
		printf("\n");
		int nextRepeat = 0;
		printf("다음 단을 입력하시겠습니까?(1:또 입력 0:종료) : ");
		scanf("%d", &nextRepeat);
		
		if (nextRepeat == 0) 
		{
			printf("프로그램을 종료합니다.");
			repeatNum = 0;
		}
		printf("\n");
	}*/

}