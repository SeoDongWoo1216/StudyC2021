// 로또 프로그램.c

/*
1. 로또 번호를 저장할 수 있는 배열을 선언(lotto[6])
2. 로또번호 입력 (동일한 번호 입력시 에러 메세지 출력하고, 그 부분부터 다시입력받기)
3. main에서 input_lotto(), print_lotto() 함수 선언

바로입력된값을 배열에 저장하지말고 입력된거를 임시변수를 사용해서
같으면 빠져나와서 다시 입력하라고함
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

input_lotto(int*,int);
print_lotto(int *, int);


int main()
{
	int lotto[6];
	int size = sizeof(lotto) / sizeof(lotto[0]);

	input_lotto(lotto, size);
	print_lotto(lotto, size);
}





input_lotto(int* iAry, int size) 
{
	int i, j, temp;
	
	for (i = 0; i < 6; i++)
	{
		printf("%d 번째 입력 : ", i + 1);
		scanf("%d", &temp);

		// 로또번호 0~45 숫자만 입력했는지 검사
		if ((temp <= 0) || (temp > 45))
		{
			printf("0~45까지의 수가 아닙니다. 다시입력하세요\n");
			i--;
			continue;
		}

		// 첫번째는 비교할 lotto가 없으니 그대로 삽입
		if (i == 0)
		{
			iAry[i] = temp;
		}

		// 로또배열 중복검사
		for (j = 0; j < i; j++)
		{
			if (temp == iAry[j])
			{
				printf("중복됩니다. 다시입력하세요\n");
				i -= 1;
				break;  // ★★★
			}
			else
			{
				iAry[i] = temp;
			}
		}
	}
}


// 로또배열 출력
print_lotto(int *iAry, int size) 
{
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", iAry[i]);
	}
}