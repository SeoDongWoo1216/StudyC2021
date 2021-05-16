## 6장 반복문
```C
while(조건식)
{
  실행문;
}
// break; 로 탈출할 수 있다.
// contiune; 을 만나면 지금 반복문을 건너뛰고 다음 반복문을 수행한다.
```

```C
for(초기식; 조건식; 증감식)
{
  실행문;
}
```

```C
do
{
  실행문;      // do 구문의 실행문을 실행하고 while문으로 들어감
}
while(조건식);
```

-----------------------------------------------------------------

### 반복문 활용 예제

#### 반복문을통한 구구단 출력
```C
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
  return 0;
}
```
![구구단결과](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/210428_Chapter6/result_image/6_gugudan.PNG)

-----------------------------------------------------------------

#### for문을 활용한 별찍기
```C
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
```
![별찍기예제화면](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/210428_Chapter6/result_image/6_star.PNG)

-----------------------------------------------------------------

#### 무한 반복문을 활용한 계산기(5장 계산기에서 업그레이드)
```C
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int firNum, secNum = 0;
	char cal[1] = {'+'};

	while (1)
	{
		printf("----------------------------------\n");
		printf("Calculator_v3\n");
		printf("Created : 2021-04-29\n");
		printf("Author : 서동우\n");
		printf("----------------------------------\n");
		printf("두 숫자 입력 : ");
		scanf("%d %d", &firNum, &secNum);
	
		printf("연산할 기호 입력(+,-,*,/) : ");
		scanf("%s", &cal);

		switch (cal[0])
		{
			case '+':
				printf("%d + %d = %d\n", firNum, secNum, firNum + secNum);
				break;
			case '-':
				printf("%d - %d = %d\n", firNum, secNum, firNum - secNum);
				break;
			case '*':
				printf("%d * %d = %d\n", firNum, secNum, firNum * secNum);
				break;
			case '/':
				printf("%d / %d = %.2lf\n", firNum, secNum, (double)firNum / (double)secNum);
				break;
			default:
				printf("사칙연산 기호만 입력해주세요\n\n\n");
				break;
		}
		printf("\n");
		
		char reStart[1] = { '0' };

		while (reStart[0])                                         // 계산끝난후에 또 계산할껀지 물어보는 while문
		{
			printf("반복하시겠습니까? (r:또 계산, e:종료) : ");
			scanf("%s", reStart);

			if (reStart[0] == 'e' || reStart[0] == 'E')
			{
				printf("프로그램을 종료합니다\n");
				exit(1);
			}
			if (reStart[0] == 'r' || reStart[0] == 'R')
			{
				printf("다시 계산합니다.\n");
				break;
			}
			else
			{
				printf("r, e말고 다른 값을 입력하셨습니다. 다시입력하세요.\n");
			}
			printf("\n");
		}
	}
	return 0;
}
```
![무한계산기화면](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/210428_Chapter6/result_image/6_calculator.png)

-----------------------------------------------------------------
