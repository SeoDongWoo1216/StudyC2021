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
<br>
-----------------------------------------------------------------

### 반복문 활용

#### 중첩반복문을통한 구구단 프로그램
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


#### 
