## 5장 선택문
```C
if(조건식)
{
  // 실행문'
}
else if(조건식)
{
  // 실행문;
}
else
{
  // 실행문;
}
```

```C
switch(변수)
  case 변수의 값1:
    실행문;
    break;
  case 변수의 값2:
    실행문;
    break;
  default:
    실행문
    break;
```
------------------------------------------------------
## 퀴즈
: 두 값을 입력받고, 두 값의 사칙연산을 수행해서 연산 결과를 출력하는 프로그램
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{

	int firNum = 0;
	int secNum = 0;
	char cal = '+';

	printf("----------------------------------\n");
	printf("Calculator_v2\n");
	printf("Created : 2021-04-28\n");
	printf("Author : 서동우\n");
	printf("----------------------------------\n");
	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &firNum, &secNum);
	printf("연산기호를 입력하세요(+,-,*,/) : ");
	scanf(" %c", &cal);
	printf("----------------------------------\n");

	switch (cal)
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
		if (secNum == 0)
		{
			printf("0으로는 나눌 수 없습니다");
		}
		else
		{
			printf("%d / %d = %.2lf\n", firNum, secNum, (double)firNum / (double)secNum);
			printf("%d %% %d = %d\n", firNum, secNum, firNum % secNum);
		}
		break;

	default:
		printf("연산기호를 입력해주세요");
		break;
	}
	printf("\n");
	return 0;
}
```
![계산기결과화면](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/210428_Chapter5/result_image/5_test_1.PNG)

------------------------------------------------------
