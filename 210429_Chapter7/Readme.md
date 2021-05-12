## 7장 함수
함수란 기능을 수행하는 코드 단위를 말한다. 지금까지 사용했던 main 함수, printf(), scanf()가 대표적인 함수라고 볼 수 있다.<br>
함수를 만드려면 3가지가 필요하다.
- 함수 정의 : 함수를 실제 코드로 만드는 것이며 기능을 구현한다.
- 함수 호출 : 함수를 호출해야 함수를 사용할 수 있다.
- 함수 선언 : 프로그램의 상단에서 어떤 함수를 사용할 것이라고 컴파일러에 정보를 주는 역할.<br>
(대신 main위에 함수를 정의하면 선언은 생략가능하다) <br>

---------------------------------------------------------

### 함수의 작성과 사용
```C
// 함수 정의
반환형 함수명(매개변수, 매개변수2)
{
     // 함수가 수행하는 명령;
     // 반환형에따라 return 결과값; 을 돌려보낸다.
}

// 두 정수의 합을 수행하는 덧셈 함수의 예시
int Sum(int a, int b)  
{
     return a + b;
}
```
함수를 만들때 고려해야할 3가지
- 함수명 : 함수의 기능에 맞는 이름 
- 매개변수 : 함수가 기능을 수행하는데 필요한 데이터 
- 반환형 : 함수가 수행된 후의 결과의 데이터타입

```C
#include <stdio.h>

int sum(int x, int y);    // sum 함수 선언

int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);    // 함수 호출
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)  // 함수 정의 시작
{
	int temp;
	temp = x + y;
	return temp;         // temp 값 반환(함수 반환)
}
```

#### 함수 호출
우리가 멋지게 함수를 만들었어도, main에서 함수를 호출해야 만든 함수를 사용할 수 있다.<br>
```C
result = sum(a, b);  // sum 함수 호출
```
함수 호출시에 이름을 사용하며, 함수를 수행하기위해 필요한 데이터를 괄호안에 넣어준다. 이를 **인수**(argument)라 부른다.<br>
이때 입력된 인수 a, b의 값은 호출된 함수의 **매개변수**(파라미터)에 복사되어 사용된다.(둘은 엄연히 다른 데이터라고도 볼수있겠다) <br><br>

#### 함수 반환
호출된 함수가 실행을 끝내고 값을 반환할때 return문을 사용한다. <br>
위의 예제에서 temp에 저장한 뒤 return을 통해 반환한 것을 확인할 수 있는데, main함수에서 result에 temp값을 저장하고 printf구문으로 넘어간다.  <br><br>

#### 함수 선언
컴파일러가 새로 만든 함수를 인식할 수 있도록 알리는 역할을 한다. <br>
위의 예제에서 3번째 줄에 int sum(int x, int y); 구문이 함수 선언 부분이다. <br>
```C
int sum(int, int);   // 매개변수의 이름을 생략하고 타입만 적어도된다.
```
함수를 정의했지만 함수 선언을 해야하는 이유는 컴파일러가 함수 선언에서 반환값의 형태를 확인해야하고, 함수의 호출 형식에 문제가 없는지 검사해야하기 때문이다. <br>

---------------------------------------------------------

### 여러가지 함수 
함수의 원형은 
```C
반환형 함수명(매개변수)
```
이지만 언제나 함수에 반환형과 매개변수가 있는 것은 아니다. <br><br>

#### 매개변수가 없는 함수
키보드로 숫자를 입력했을때 그 숫자를 반환하는 함수를 만든다면 매개변수 값을 받을 필요가 없어질것이다. 이때 매개변수 자리에 void를 사용하면된다.
```C
// 매개변수가 없는 함수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_num(void);                   // 함수 선언

int main(void) 
{
	int result;

	result = get_num();              // 함수 호출, 반환값은 res
	printf("반환값 : %d\n", result); // 반환값 출력
	return 0;
}

int get_num(void)              // 매개변수가 없고 반환형만 있다.
{
	int num;                        // 키보드 입력값을 저장할 변수

	printf("양수 입력 : ");		  // 입력 안내 메세지
	scanf("%d", &num);               // 키보드 입력

	return num;                      // 입력한 값 반환
}
```
result = get_num(); 구문에서처럼 매개변수가 없을때는 함수를 호출하는 것이므로 ()를 써주면 된다. <br>
매개변수가 없기때문에 함수에 들어갈 인수도 없다.<br><br>


#### 반환값이 없는 함수
어떤 함수가 데이터를 받아서 단지 화면에 출력하는 함수라면 특별히 반환값이 필요없을 것이다. 이때 반환형에 void를 써주면된다.
```C
// 반환값이 없는 함수
#include<stdio.h>

void print_char(char, int); // 함수 선언

int main() 
{
	print_char('@', 5);       // 문자와 숫자를 주고 함수 호출

	return 0;
}

void print_char(char ch, int count) // 매개변수는 있으나 반환형은 없는 함수
{
	int i;
	for (i = 0; i < count; i++)       // count번 반복
	{
		printf("%c", ch);               // 매개변수 ch에 받은 문자를 출력해준다.
	}
	// return;
}
```

<br>

#### 매개변수, 반환값 모두 없는 함수
일정한 문자열을 여러 번 출력하는 함수가 있다면, 매개변수와 반환값이 모두 필요없을 것이다. <br>
이때 함수의 매개변수와 반환형 모두 void를 써준다.
```C
#include <stdio.h>

void print_line(void);      // 함수 선언

int main() 
{
	print_line();           // 함수 호출
	printf("학번\t 이름\t 전공\t 학점\n");
	print_line();           // 함수 호출

	return 0;
}

void print_line(void) 
{
	int i;
	for (i = 0; i < 50; i++) 
  {
		printf("-");
	}
	printf("\n");
}
```
print_line 함수에는 인수로 받는 매개변수와 return문이 없으므로 호출할때 값을 주지않으며, 호출은 독립된 문장으로 쓰일 수 있다.

<br>

#### 재귀호출 함수
함수는 보통 다른 함수를 호출하는데 재귀호출 함수는 자기 자신을 호출한다.
```C
// 3번 실행되는 재귀호출 함수
#include <stdio.h>

void fruit(int count);

int main(void) 
{
	fruit(1);					// 처음 호출하므로 1을 인수로함
	return 0;
}

void fruit(int count)			// 호출 횟수를 매개변수에 저장
{
	printf("apple\n");
	if (count == 3) return;     // 호출 횟수가 3이면 반환하고 끝냄
	fruit(count + 1);           // 재호출할때 호출횟수를 1 증가
}
```

만약 재귀호출함수에서 조건문으로 함수 호출에대한 제어가없으면 무한으로 호출하기때문에 제어해주는 것이 중요하다.

---------------------------------------------------------

### 퀴즈 : 함수를 사용한 계산기(6장의 계산기를 업그레이드)
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수선언 
int Sum(int, int);
int Sub(int, int);
int Mul(int, int);
double Div(int, int);

// 메인
int main(void)
{
	int a, b = 0;       // 두 정수
	int result = 0;     // 두 정수의 연산값을 저장할 변수
	double div_result;  // 나누기했을때 저장할 연산값 저장할 변수
	char cal;
	int start_point;    // 시작할지 종료할지 저장할 변수 문자

	// 무한 반복으로 계속해서 계산기 사용 
	while (1)
	{
		printf("----------------------------------\n");
		printf("Calculator_v4\n");
		printf("Created : 2021-04-30\n");
		printf("Author : 서동우\n ");
		printf("----------------------------------\n");
		printf("계산기를 실행하시겠습니까?(1:시작, 0: 종료) : ");
		scanf("%d", &start_point);
		
		if (start_point == 0)
		{
			printf("계산기를 종료합니다\n");
			break;
		}
		else if (start_point == 1)
		{
			printf("계산기를 실행합니다.\n");

			printf("두 정수를 입력하세요 : ");
			scanf("%d  %d", &a, &b);

			printf("연산 기호를 입력하세요 : ");
			scanf(" %c", &cal);

			if (a > 0 && b > 0)  // a,b 값이 자연수일때 실행 
			{
				printf("계산결과 : ");

				if (cal == '+')
				{
					result = Sum(a, b);
					printf("%d + %d = %d\n", a, b, result);
				}
				else if (cal == '-')
				{
					result = Sub(a, b);
					printf("%d - %d = %d\n", a, b, result);
				}
				else if (cal == '*')
				{
					result = Mul(a, b);
					printf("%d * %d = %d\n", a, b, result);
				}
				else if (cal == '/')
				{
					if (b == 0)
					{
						printf("0으로는 나눌 수 없습니다. 다시 입력해주세요\n");
						continue;
					}
					else
					{
						div_result = Div(a, b);
						printf("%d ÷ %d = %.2lf\n", a, b, div_result);
					}
				}
				else
				{
					printf("연산기호는 +,-,*,/ 만 사용하세요\n"); // 잘못된 연산기호 오류 출력 
				}
			}
			else
			{
				printf("자연수만 입력하세요\n");
			}
			printf("\n");
		}

		else 
		{
			printf("0, 1 중 하나만 입력해주세요\n\n");
			continue;
		}
		
	}

}

// 함수 정의 
int Sum(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

double Div(int x, int y)
{
	return (double)x / (double)y;
}

```
![계산기결과화면](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/210429_Chapter7/resultImage/7_calcul.PNG)

기능을 좀 더 추가하려고 main함수에 몰아서 구현했지만,  <br>
처음 출력문, 계산기를 반복 실행할때, 정수 입력할때, 연산기호 입력할때, 계산결과를 출력할 때 등을 함수로 만들면 좀 더 보기좋은 코드가 될것이다. <br><br>

// TODO <br>
정수 2개를 입력할때 정수말고 문자를 입력했을때 오류제어도 필요! 
